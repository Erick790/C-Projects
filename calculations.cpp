#include <iostream>


float square(float n) {
  return n*n;
}

float cube(float n) {
  return n*n*n;
}

int main() {
  float x;
  std::cout << "Enter a number: ";
  std::cin >> x;
  std::cout << "The squared of " << x << " is " << square(x) << std::endl;
  std::cout << "The cube of " << x << " is " << cube(x) << std::endl;
}