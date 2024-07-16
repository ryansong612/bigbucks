#include <iostream>
#include <sstream>
#include "order.h"
#include "book.h"

using namespace std;

int main() {

  string input;
  book *book = new class book("AAPL");
  while (true) {
    cout << "Enter: ";
    getline(cin, input);

    if (input == "exit") {
      break;
    }
    
    string side_str;
    double price;
    long quantity;

    stringstream ss(input);
    ss >> side_str >> quantity >> price;

    if (ss.fail() || (!ss.eof() && ss.peek() != EOF)) {
      // Handle incorrect input format
      cout << "Invalid input format. Please use: <side> <quantity> <price>" << endl;
      continue;
    }
    // input should be split by space: SIDE PRICE QUANTITY

    side side = side_str == "buy" ? BUY : SELL;
    auto order = new class order(side, price, quantity);
    cout << order->stringify() << endl;
    book->execute(order);
    book->show();
  }

  delete book;
  return 0;
}