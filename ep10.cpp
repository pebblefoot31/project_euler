#include <iostream>
#include <vector>
using namespace std;

// Compute sum of all prime numbers below 2mil
// Expected: 142913828922
// Calculated: 142913828922

bool is_prime(int x) {

    for (int i = 2; i*i <= x; i++) {
        if (x%i == 0) {
            return false;
        }
    }

    return true;
}


int main() {

    long num = 2;
    long long sum = 0;

    while (num < 2000000) {

        if (is_prime(num)) {
            sum += num;
        }

        num++;
    }

    cout << sum << endl;

    return 0;
}
