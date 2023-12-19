//In progress: figuring out how to prevent it from calculating 8462696833 as a prime factor of the long number
#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) { //function to check for prime numbers
 
    for (int i = 2; i <= sqrt(n); i++) {
        if ((n % i) == 0) {
             return false;
        }
     }
 
    return true;
}
 
int main() {

    long int num = 600851475143; 
    long int primeFactor;
    long int factorCurr = 2;
    
    while (true) {

       if (factorCurr > num) {
           break;
       }

        if (num%factorCurr == 0 && isPrime(factorCurr)) { //checking whether the current potential factor is actually a factor of the number

            primeFactor = factorCurr;
        }

        factorCurr++;
    }

    cout << "The largest prime factor of the number " << num << " is: " << primeFactor << endl;

    return 0;
}
