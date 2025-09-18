#include <iostream>
#include <iomanip>

using namespace std;
//Nia Maheshwari
//October 28th, 2023
/*Solving Euler's Problem 2: By considering the terms in the 
 Fibonacci sequence whose values do not exceed four million,
 find the sum of the even-valued terms.*/

int main() {
    
    int prevNum1 = 1;
    int prevNum2 = 2;
    int currentNum = 0;
    int fibEvenSum = 0;

    while (true) {
        
        if (currentNum > 4000000)
            break;

        currentNum = prevNum1 + prevNum2; 

        prevNum1 = prevNum2;
        prevNum2 = currentNum;

        if (currentNum % 2 == 0) {
            fibEvenSum += currentNum;
        }

    }


    return 0;
}
