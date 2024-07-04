//
// Created by Ryan Song on 04/07/2024.
//

#include "queue.h"

using namespace std;

order_queue::order_queue(enum side side) {
  this->side = side;
}

void order_queue::add(order& order) {
  pq.push(order);
}

order order_queue::pop() {
  pq.pop();
}