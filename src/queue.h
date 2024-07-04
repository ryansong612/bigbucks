//
// Created by Ryan Song on 04/07/2024.
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

    order pop();
    void add(order& order);

  private:
    side side;

    struct compare {
      bool operator()(const order& lhs, const order& rhs) const {
        if (lhs.get_price() == rhs.get_price()) {
          return lhs.get_timestamp() > rhs.get_timestamp();
        }
        return lhs.get_price() < rhs.get_price();
      }
    };

    priority_queue<order, vector<order>, compare> pq;
};



#endif //BIGBUCKS_QUEUE_H
