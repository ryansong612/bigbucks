#include <iostream>
#include "order.h"

using namespace std;

int main() {
  auto *order = new Order(BUY, 100, 1000);
  cout << order->stringify() << endl;
  return 0;
}
