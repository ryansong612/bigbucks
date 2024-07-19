//
// Created by Ryan Song and Kushagra Srivastava
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
    *trade_amount -= this->quantity;
    this->quantity = 0;
  } else {
    this->quantity -= *trade_amount;
    *trade_amount = 0;
  }
}


