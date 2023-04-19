#include <iostream>
#include <cmath>


int main() {
  char shape, choice;
  double radius, length, width, base, height, a, b, c;

  std::cout << "Write C for Circle, Write R for Rectangle, Write T for Triangle: ";
  std::cin >> shape;
  if (shape == 'C' || shape == 'c') {
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;
    std::cout << "Area = " << M_PI * pow(radius, 2) << std::endl;
    std::cout << "Perimeter = " << 2 * M_PI * radius;
  } else if (shape == 'R' || shape == 'r') {
    std::cout << "Enter the length: ";
    std::cin >> length;
    std::cout << "Enter the width: ";
    std::cin >> width;
    std::cout << "Area = " << length * width << std::endl;
    std::cout << "Perimeter = " << 2 * (length + width);
  } else if (shape == 'T' || shape == 't') {
    std::cout << "Write A to solve for Area and Write P to solve for Perimeter: ";
    std::cin >> choice;
    if (choice == 'A' || choice == 'a') {
      std::cout << "Enter the base: ";
      std::cin >> base;
      std::cout << "Enter the height: ";
      std::cin >> height;
      std::cout << "Area = " << base * height * 1 / 2 << std::endl; 
    } else if (choice == 'P' || choice == 'p') {
      std::cout << "Enter (a) value: ";
      std::cin >> a;
      std::cout << "Enter (b) value: ";
      std::cin >> b;
      std::cout << "Enter (c) value: ";
      std::cin >> c;
      std::cout << "Perimeter = " << a + b + c;
    } else {
      std::cout << "Enter a correct letter";
    }
  } else {
    std::cout << "Enter a correct letter";
  }
}