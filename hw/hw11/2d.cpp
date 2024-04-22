#include <iostream>

int subtractAndAdd(int N) {
  int counter = 0;
  while (N > 0) {
    if (N % 2 == 0) {
      N = N - 3;
    }
    if (N % 2 == 1) {
      N = N + 1;
    }
    counter++;
  }
  std::cout << "The loop ran " << counter << " times." << std::endl;
  return N;
}

int main() {
  int N = 0; // You can change this to your own number
  std::cin >> N;
  int result = subtractAndAdd(N);
  std::cout << "The result is: " << result << std::endl;
  return 0;
}
