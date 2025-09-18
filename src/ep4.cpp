//Nia Maheshwari
//Status: in progress
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {

    long factor1 = 999;
    long factor2 = 999;

    long long product;
    bool flag = false; 
    long long curr;
    unordered_map<long ,long> done;

    int i = 0;
    int j = 0;

    vector<int> digits;
    
    while (factor1 > 99) {

        factor2 = 999; 
        while (factor2 > 99) {

            product = factor1*factor2;
            curr = product;
            while (product >= 1) {
                digits.push_back(product%10);
                product = (product - (product%10))/10;
            }

            i = 0;
            j = digits.size()-1;

            //iterating over vector of digits
            flag = true;
            while (i < j) {
               if (digits[i] != digits[j]) {
                   flag = false;
                   digits.clear();
                   break;
               }

               i++;
               j--;
            }

            if (flag) {
                break;
            }
            factor2--;
        }

        if (flag) {
            break;
        }

        factor1--;
    }

    cout << "The largest palindrome is " << curr << endl;
    return 0;
}
