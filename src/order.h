//
// Created by Ryan Song and Kushagra Srivastava
//

#ifndef BIGBUCKS_ORDER_H
#define BIGBUCKS_ORDER_H

#include <string>
#include <ctime>

using namespace std;

enum side {
  BUY,
  SELL
};

class order {
  public:
    order(side side, double price, long quantity);
    string stringify() const;

    side get_side() const { return side; }
    double get_price() const { return price; }
    long get_quantity() const { return quantity; }
    time_t get_timestamp() const { return timestamp; }

    bool is_buy() const { return side == BUY; }
    bool is_sell() const { return side == SELL; }

    void set_quantity(long quantity);
    void subtract_quantity(long *trade_amount);


  private:
    side side;
    double price;
    long quantity;
    time_t timestamp;
};




#endif //BIGBUCKS_ORDER_H
