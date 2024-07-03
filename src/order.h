//
// Created by S on 2024/7/3.
//

#ifndef BIGBUCKS_ORDER_H
#define BIGBUCKS_ORDER_H

#include <string>
#include <ctime>

using namespace std;

enum Side {
  BUY,
  SELL
};

class Order {
  public:
    Order(Side side, double price, long quantity);
    [[nodiscard]] string stringify() const;

    [[nodiscard]] Side get_side() const { return side; }
    [[nodiscard]] double get_price() const { return price; }
    [[nodiscard]] long get_quantity() const { return quantity; }
    [[nodiscard]] time_t get_timestamp() const { return timestamp; }

    void set_quantity(long quantity);
    void subtract_quantity(long *trade_amount);

  private:
    Side side;
    double price;
    long quantity;
    time_t timestamp;
};




#endif //BIGBUCKS_ORDER_H
