#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// This problem requires us to compute the difference between the sum of the squares and the square of the sum of the numbers 1-100

int sumSquares(int lo, int hi) {

    int sum = 0;
    for (int i = lo; i < hi; i++) {
        sum += pow(i,2);
    }

    return sum;
}

int squareSum(int lo, int hi) {
    
    int sum = 0;
    for (int i = lo; i < hi; i++) {
        sum += i;
    }
    return pow(sum, 2);
}

int main() {

    cout << (sumSquares(0,100) - squareSum(0,100)) << endl;
    return 0;
}
