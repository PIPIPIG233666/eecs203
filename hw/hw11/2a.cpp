#include<iostream>
#include<cmath>

int doubleTrouble(int N) {
    int j = 1;
    int counter = 0;
    for(int i = 1; i <= N; i++) {
        counter++;
        if(i == j) {
            j = 2*j;
        }
    }
    std::cout << "The loop ran " << counter << " times." << std::endl;
    return j;
}

int main() {
    int N;
    std::cout << "Enter a number N: ";
    std::cin >> N;
    int result = doubleTrouble(N);
    std::cout << "The result is: " << result << std::endl;
    return 0;
}

