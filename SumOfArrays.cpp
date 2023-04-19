#include <iostream>


int sumArray(int *arr, int size) {
  int sum = 0;
  if (size > 0) {
    for (int i = 0; i < size; i++) {
      sum += arr[i];
    }
  }
  return sum;
}

int main() {
  int myArray[] = {1, 2, 3, 4, 5};
  int size = sizeof(myArray) / sizeof(myArray[0]);
  std::cout << "The sum of the elements in the array is: " << sumArray(myArray, size) << std::endl;
}