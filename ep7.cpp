#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// Determine the 10001st prime number
// expected : 104743
// output: 104743


// simple helper function to detect a prime number
bool is_prime(int x) {

    for (int i = 2; i*i <= x; i++) {
        if (x%i == 0) 
            return false;
    }

    return true;
}

int main() {

    int num = 1;
    int count = 0;
    int amt = 10001;

    while (count < amt) {

        num++;

        if (is_prime(num)) {
            count++;
        }
    }

    cout << num << endl;

    return 0;
}
