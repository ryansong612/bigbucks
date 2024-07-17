#include <iostream>
#include <sstream>
#include "order.h"
#include "book.h"

using namespace std;

string getInput() {
  string input;
  cout << "Enter: ";
  getline(cin, input);
  return input;
}

void processInput(const string& input, book* book) {

    if (input == "exit") {
      return;
    }

    string side_str;
    double price;
    long quantity;

    stringstream ss(input);
    ss >> side_str >> quantity >> price;

    if (ss.fail() || (!ss.eof() && ss.peek() != EOF)) {
      // Handle incorrect input format
      cout << "Invalid input format. Please use: <side> <quantity> <price>" << endl;
      return;
    }
    // input should be split by space: SIDE PRICE QUANTITY

    side side = side_str == "buy" ? BUY : SELL;
    auto order = new class order(side, price, quantity);
    cout << order->stringify() << endl;
    book->execute(order);
    book->show();
}

int main() {
  book *book = new class book("AAPL");

  while (true) {
    string input = getInput();

    if (input == "exit") {
      break;
    }
  
    processInput(input, book);
  }

  delete book;
  return 0;
}