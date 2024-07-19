//
// Created by Ryan Song and Kushagra Srivastava
//

#ifndef BIGBUCKS_QUEUE_H
#define BIGBUCKS_QUEUE_H

#include "order.h"
#include <queue>
#include <vector>


class order_queue {
  public:
    order_queue(side side);
    side get_side() const { return side; }
    bool is_empty() const { return pq.empty(); }
    order peek() const { return pq.top(); }

    void pop();
    void add(order& order);

    void show();

  private:
    side side;

    struct compare {
      enum side comparison_side;
      explicit compare(enum side comparison_side) : comparison_side(comparison_side) {}
      bool operator()(const order& lhs, const order& rhs) const {
        if (comparison_side == BUY) {
          if (lhs.get_price() == rhs.get_price()) {
            return lhs.get_timestamp() > rhs.get_timestamp();
          }
          return lhs.get_price() < rhs.get_price();
        } else {
          if (lhs.get_price() == rhs.get_price()) {
            return lhs.get_timestamp() > rhs.get_timestamp();
          }
          return lhs.get_price() > rhs.get_price();
        }
      }
    };

    priority_queue<order, vector<order>, compare> pq;
};



#endif //BIGBUCKS_QUEUE_H
