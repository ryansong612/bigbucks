#include <iostream>
#include "order.h"

int main() {
  auto *order = new Order(BUY, 100, 1000);
  std::cout << order->stringify() << std::endl;
  return 0;
}
