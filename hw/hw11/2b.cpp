#include<iostream>

int sumSquares(int N, int &counter) {
    counter++;
    if(N == 1) {
        return 1;
    }
    int value = sumSquares(N - 1, counter) + N*N;
    return value;
}

int main() {
    int N;
    std::cout << "Enter a positive integer N: ";
    std::cin >> N;
    int counter = 0;
    int result = sumSquares(N, counter);
    std::cout << "The result is: " << result << std::endl;
    std::cout << "The function was called " << counter << " times." << std::endl;
    return 0;
}

