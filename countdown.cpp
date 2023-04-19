#include <iostream>
#include <chrono>
#include <thread>

int main() {
  std::cout << "The newyear begins in" << std::endl;
  std::this_thread::sleep_for(std::chrono::seconds(1));
  int x = 10;
  while (x > 0) {
    std::this_thread::sleep_for(std::chrono::seconds(1));
    std::cout << x << " " << std::endl;
    x--;
  }
  std::this_thread::sleep_for(std::chrono::seconds(1));
  std::cout << "Happy NewYear";
}