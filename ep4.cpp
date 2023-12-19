//Nia Maheshwari
//Status: in progress

#include <iostream>
using namespace std;

int main() {

    int factor1 = 100;
    int factor2 = 100;
    long int currProduct;
    int digit;
    int num;
    vector <int> numDigits;
    vector<int> products;
    vector<int> palindromes;

    while (true) {

        if (factor1 < 998) {
            currProduct = factor1 * factor2;
            products.push_back(currProduct);
            factor1++;
        }

        if (factor1 == 999 && factor2 < 998) {

            currProduct = factor1 * factor2;
            products.push_back(currProduct);
            factor2++;
        }

        if (factor1 == 999 && factor2 == 999) {
            break;
        }

    }

    for (size_t i = 0; i < products.size(); i++) {

        num = products[i];

        while (num > 0) {
            digit = num%10;
            digits.push_back(digit)
            num = num/10;
        }
        
        vector<int>::iterator itforward = digits.begin();
        vector<int>::iterator itbackward = digits.rbegin();

        for (itforward; itforward != itbackward; itforward++) {

            if (*itforward == *itbackward) {
                itbackward++;
                same = true;
            }

            if (!same) {
                break;
            }
        }

        if (same) {
           palindromes.push_back(products[i]);
        }

    }


    return 0;
}
