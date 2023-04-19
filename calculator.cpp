#include <iostream>


int main() {
  double num1, num2;
  char operation;

  std::cout << "Enter the first number: ";
  std::cin >> num1;
  std::cout << "Enter the second number: ";
  std::cin >> num2;
  std::cout << "Enter the operation (+, -, *, /): ";
  std::cin >> operation;

  if (operation == '+') {
    std::cout << num1 << " + " << num2 << " = " << num1 + num2 << std::endl; 
  } else if (operation == '-') {
    std::cout << num1 << " - " << num2 << " = " << num1 - num2 << std::endl;
  } else if (operation == '*') {
    std::cout << num1 << " * " << num2 << " = " << num1 * num2 << std::endl;
  } else if (operation == '/') {
    std::cout << num1 << " / " << num2 << " = " << num1 / num2 << std::endl;
  } else {
    std::cout << "Enter a valid operation";
  }
}