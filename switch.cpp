#include <iostream>


int main() {
  double num1, num2;
  char operation;

  std::cout << "Enter the first number: ";
  std::cin >> num1;
  std::cout << "Enter the second number: ";
  std::cin >> num2;
  std::cout << "Enter operation (+, -, *, /): ";
  std::cin >> operation;

  switch (operation) {
  case '+':
    std::cout << num1 << " + " << num2 << " = " <<  num1 + num2;
    break;
  case '-':
    std::cout << num1 << " - " << num2 << " = " <<  num1 - num2;
   break;
  case '*':
    std::cout << num1 << " * " << num2 << " = " <<  num1 * num2;
   break;
  case '/':
    std::cout << num1 << " / " << num2 << " = " <<  num1 / num2;
   break;
  default:
    std::cout << "Enter a valid operation";
    break;
  }
}