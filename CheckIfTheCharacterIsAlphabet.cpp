#include <iostream>


int main() {
  char name;
  do {
    std::cout << "Enter your name: ";
    std::cin >> name;
  } while (!std::isalpha(name));
}