#include <iostream>
using namespace std;

//Nia Maheshwari
//Solving Euler's Problem 1: Find the sum of all the multiples of 3 or 5 below 1000. 
//October 25th, 2023

bool multFive(int num) { //function that checks if the number is a multiple of 5
    if (num % 5 == 0) {
        return true;
    }

    else {
        return false;
    }
}

bool multThree(int num) { //function that checks if the number is a multiple of 3

    if (num % 3 == 0) {
        return true;
    }

    else {
        return false;
    }
}

int main() {

    int sum;

    for (int n = 0; n < 1000; n++) {

        if ((multFive(n)) || (multThree(n)))
            sum += n; //incrementing sum by the value if it is either multiple of 3 or 5
    }

    cout << sum << endl; //printing sum

    return 0;
}
