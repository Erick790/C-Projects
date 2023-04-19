#include <iostream>


int main() {
  for (int i = 2; i < 1001; i++) {
    if (i % 2 == 0) {
      std::cout << i << " is an even number" << std::endl;
    } else {
      std::cout << i << " is an odd number" << std::endl;
    }
  }
}