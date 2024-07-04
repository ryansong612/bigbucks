//
// Created by Ryan Song on 04/07/2024.
//

#include "book.h"

#include <utility>

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
  long quantity = buy_order->get_quantity();
  best_sell.subtract_quantity(&quantity);

  if (best_sell.get_quantity() == 0) {
    // cancel this empty sell order that has been fulfilled
    sell_queue->pop();
  }

  if (quantity > 0) {
    // creating and push a standing order
    buy_order->set_quantity(quantity);
    buy_queue->add(*buy_order);
  }
}

void book::execute_sell(order *order) {}