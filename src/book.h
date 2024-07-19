//
// Created by Ryan Song and Kushagra Srivastava
//

#ifndef BIGBUCKS_BOOK_H
#define BIGBUCKS_BOOK_H

#include <string>
#include "queue.h"
#include "order.h"

using namespace std;

class book {
  public:
    book(string index);
    string index;
    void execute(order *order);

    void show();

  private:
    order_queue *buy_queue;
    order_queue *sell_queue;

    void execute_buy(order *order);
    void execute_sell(order *order);

};


#endif //BIGBUCKS_BOOK_H
