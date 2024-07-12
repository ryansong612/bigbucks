#include <iostream>
#include "order.h"
#include "book.h"

using namespace std;

int main() {
//  auto order1 = new class order(BUY, 90, 1000);
//  cout << order1->stringify() << endl;
//
//  auto order2 = new class order(BUY, 100, 100);
//  cout << order2->stringify() << endl;
//
//  auto buy_queue = new class order_queue(BUY);
//
//  buy_queue->add(*order1);
//  order peek1 = buy_queue->peek();
//  buy_queue->add(*order2);
//  order peek2 = buy_queue->peek();
//
//  cout << peek1.stringify() << endl;
//  cout << peek2.stringify() << endl;

  // accept user input from command line
  string input;
  book *book = new class book("AAPL");
  while (true) {
    cout << "Enter: ";
    string side_str;
    double price;
    long quantity;
    cin >> side_str >> price >> quantity;
    if (side_str == "exit") {
      break;
    }
    // input should be split by space: SIDE PRICE QUANTITY

    side side = side_str == "buy" ? BUY : SELL;
    auto order = new class order(side, price, quantity);
    cout << order->stringify() << endl;
    book->execute(order);
    book->show();
  }

  return 0;
}
