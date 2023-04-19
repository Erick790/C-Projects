#include <iostream>


int factorial(int n) {
  int result = 1;
  for (int i = 1; i <= n; i++) {
    result *= i;
  }
  return result;
}

int main() {
  int x;
  std::cout << "Enter a number to solve for factorial: ";
  std::cin >> x;
  std::cout << "The factorial of " << x << "! is " << factorial(x) << std::endl;
}