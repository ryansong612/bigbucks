#include <iostream>
#include <sstream>
#include "order.h"
#include "book.h"
#include <unordered_map>

using namespace std;

string getInput() {
  string input;
  cout << "Enter: ";
  getline(cin, input);
  return input;
}

void processInput(const string& input, unordered_map<string, book*>& books, long& orderIdCounter) {

    if (input == "exit") {
      return;
    }

    stringstream ss(input);
    string command;
    ss >> command;

    if (command == "show") {
      string equity;
      ss >> equity;

      if (ss.fail() || (!ss.eof() && ss.peek() != EOF)) {
        cout << "Invalid command. Usage: show <equity> " << endl;
        return;
      }

      if (books.find(equity) != books.end()) {
        books[equity]->show();
      } else {
        cout << "No order books found for equity: " << equity << endl;
      }
      return;
    }

    string side_str, equity, quantity_str, price_str;
    double price;
    long long quantity;

    ss.clear();
    ss.str(input);
    ss >> side_str >> quantity_str >> price_str >> equity;

    try {
      quantity = stoll(quantity_str);
    } catch (const invalid_argument&) {
      std::cerr << "Invalid quantity format.\n";
      return;
    } catch (const out_of_range&) {
      std::cerr << "Quantity must be less than 2^63.\n";
      return;
    }

    try {
      price = stod(price_str);
    } catch (const invalid_argument&) {
      std::cerr << "Invalid price format.\n";
      return;
    } catch (const out_of_range&) {
      std::cerr << "Price must be less than 2^63.\n";
      return;
    }

    if (ss.fail() || (!ss.eof() && ss.peek() != EOF)) {
      // Handle incorrect input format
      cout << "Invalid input format. Please use: <side> <quantity> <price> <equity>" << endl;
      return;
    }

    if (books.find(equity) == books.end()) {
      books[equity] = new book(equity);
    }
    // input should be split by space: SIDE PRICE QUANTITY

    side side = side_str == "buy" ? BUY : SELL;
    auto order = new class order(side, price, quantity, orderIdCounter++);
    cout << endl;
    books[equity]->execute(order);
    books[equity]->show();
}

int main() {
  unordered_map<string, book*> books;
  long orderId = 1;

  while (true) {
    string input = getInput();

    if (input == "exit") {
      break;
    }
  
    processInput(input, books, orderId);
  }

  for (auto& pair : books) {
    delete pair.second;
  }
  return 0;
}