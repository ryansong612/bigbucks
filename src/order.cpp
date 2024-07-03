//
// Created by S on 2024/7/3.
//

#include "order.h"
#include <string>
#include <ctime>

using namespace std;
Order::Order(Side side, double price, long quantity) {
  this->side = side;
  this->price = price;
  this->quantity = quantity;
  this->timestamp = time(nullptr);
}

string Order::stringify() const {
  string side_str = this->side == BUY ? "BUY" : "SELL";
  return side_str
    + " "
    + to_string(this->quantity)
    + " @ " + to_string(this->price);
}

void Order::set_quantity(long q) {
  this->quantity = q;
}

void Order::subtract_quantity(long *trade_amount) {
  if (this->quantity < *trade_amount) {
    this->quantity = 0;
    *trade_amount -= this->quantity;
  } else {
    this->quantity -= *trade_amount;
  }
}


