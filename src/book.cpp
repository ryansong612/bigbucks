//
// Created by Ryan Song on 04/07/2024.
//

#include "book.h"

#include <utility>
#include <iostream>

using namespace std;

book::book(string index) {
  this->index = std::move(index);
  this->buy_queue = new class order_queue(BUY);
  this->sell_queue = new class order_queue(SELL);
}

void book::execute(order *order) {
  if (order->is_buy()) {
    execute_buy(order);
  } else if (order->is_sell()) {
    execute_sell(order);
  }
}

void book::execute_buy(order *buy_order) {
  // we can assert here that the order is buy sided
  if (sell_queue->is_empty()) {
    // no trades can occur, buy order becomes standing
    buy_queue->add(*buy_order);
    return;
  }

  // we have sell orders to trade with
  order best_sell = sell_queue->peek();
  sell_queue->pop();
  long quantity = buy_order->get_quantity();
  best_sell.subtract_quantity(&quantity);

  if (best_sell.get_quantity() != 0) {
    sell_queue->add(best_sell);
  }

  if (quantity > 0) {
    // creating and push a standing order
    buy_order->set_quantity(quantity);
    execute_buy(buy_order);
  }
}

void book::execute_sell(order *sell_order) {
  // we can assert here that the order is sell sided
  if (buy_queue->is_empty()) {
    // no trades can occur, sell order becomes standing
    sell_queue->add(*sell_order);
    return;
  }

  // we have buy orders to trade with
  order best_buy = buy_queue->peek();
  buy_queue->pop();
  long quantity = sell_order->get_quantity();
  best_buy.subtract_quantity(&quantity);

  if (best_buy.get_quantity() != 0) {
    buy_queue->add(best_buy);
  }

  if (quantity > 0) {
    // creating and push a standing order
    sell_order->set_quantity(quantity);
    execute_sell(sell_order);
  }
}

void book::show() {
  cout << "------------------------------------------------" << endl;
  cout << "Index: " << this->index << endl;
  cout << "Buy Queue:" << endl;
  buy_queue->show();
  cout << "Sell Queue:" << endl;
  sell_queue->show();
  cout << "------------------------------------------------" << endl;
}
