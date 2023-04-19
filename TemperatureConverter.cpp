#include <iostream>
#include <chrono>
#include <thread>


int main() {
  double n;
  char unit;

  std::cout << "Convert Fahrenheit to Celcius and Celcius to Fahrenheit" << std::endl;
  std::this_thread::sleep_for(std::chrono::seconds(3));
  std::cout << "Enter a number to convert: ";
  std::cin >> n;
  std::cout << "Write F for Fahrenheit and C for Celcius: ";
  std::cin >> unit;

  if (unit == 'F' || unit == 'f') {
    std::cout << n << "\370F" << " = " << (n - 32) * 5 / 9 << "\370C";
  } else if (unit == 'C' || unit == 'c') {
    std::cout << n << "\370C" << " = " << (n * 9 / 5) + 32 << "\370F";
  } else {
    std::cout << "Invalid unit";
  }
}