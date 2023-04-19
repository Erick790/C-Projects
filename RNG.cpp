#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
  srand(time(0));
  int randomNumber = rand() % 100 + 1;
  int n;
  std::cout << "Enter a random number from 1-100: ";
  std::cin >> n;
  std::cout << "The lucky number is: " << randomNumber << std::endl;
  if (randomNumber == n) {
    std::cout << "Congrats you won!";
  } else {
    std::cout << "Better luck next time";
  }
}