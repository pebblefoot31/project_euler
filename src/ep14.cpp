#include <iostream>
#include <vector>
using namespace std;

// finding the number under 1mil with the largest Collatz chain

int collatz(int num) {

    int chain = 1;

    while (num > 1) {

        if (num % 2 == 0) {
            num /= 2;
        } else {
            num = 3*num+1;
        }

        chain++;
    }

    return chain;

}

int main() {

    int chain = 1;
    int maxChain = 1;
    int num = 1;
    int maxNum = 2;
    
    while (num < 1000000) {

        chain = collatz(num);

        if (chain > maxChain) {
            maxNum = num;
            maxChain = chain;
        }

        chain = 1;
        num++;
        
    }

    cout << maxNum << endl;

    return 0;
}
