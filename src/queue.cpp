//
// Created by Ryan Song and Kushagra Srivastava
//

#include <iostream>
#include "queue.h"

using namespace std;

order_queue::order_queue(enum side side) : pq(compare(side)) {
  this->side = side;
}

void order_queue::add(order& order) {
  pq.push(order);
}

void order_queue::pop() {
  pq.pop();
}

void order_queue::show() {
  // make a copy
  priority_queue<order, vector<order>, compare> pq_copy = pq;
  while (!pq_copy.empty()) {
    order o = pq_copy.top();
    cout << o.stringify() << endl;
    pq_copy.pop();
  }
}
