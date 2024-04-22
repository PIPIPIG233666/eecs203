#include<iostream>
#include<vector>

int findLTMinProduct(std::vector<double> a) {
    int N = a.size();
    double p = 203;
    int counter = 0;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            counter++;
            if(a[i]*a[j] < p) {
                p = a[i]*a[j];
            }
        }
    }
    int numLTMinProduct = 0;
    for(int k = 0; k < N; k++) {
        counter++;
        if(a[k] < p) {
            numLTMinProduct++;
        }
    }
    std::cout << "The loop ran " << counter << " times." << std::endl;
    return numLTMinProduct;
}

int main() {
    std::vector<double> a = {1.2, 2.3, 3.4, 4.5, 5.6}; // You can change this to your own array
    int result = findLTMinProduct(a);
    std::cout << "The result is: " << result << std::endl;
    return 0;
}
