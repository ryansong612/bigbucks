//
// Created by S on 2024/7/3.
//

#include "order.h"
#include <string>
#include <ctime>
#include <sstream>
#include <iomanip>
#include <iostream>

using namespace std;
order::order(enum side side, double price, long quantity) {
  this->side = side;
  this->price = price;
  this->quantity = quantity;
  this->timestamp = time(nullptr);
}

string order::stringify() const {
  std::ostringstream stream;
  string side_str = is_buy() ? "BUY" : "SELL";
  stream << std::fixed << std::setprecision(2) << this->price;
  return side_str
    + " "
    + to_string(this->quantity)
    + " @ $" + stream.str();
}

void order::set_quantity(long q) {
  this->quantity = q;
}

void order::subtract_quantity(long *trade_amount) {
  if (this->quantity < *trade_amount) {
    this->quantity = 0;
    *trade_amount -= this->quantity;
  } else {
    this->quantity -= *trade_amount;
    *trade_amount = 0;
  }
}


