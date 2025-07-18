#include <iostream>
using namespace std;
//SOLVED

int main() {

    int i = 4;
    long curr;
    bool flag = false;
    while (true) {

       curr = i*5; 
       if (curr %9 == 0 && curr%19 == 0) {
            for (int j = 2; j < 21; j++) {
                flag = true;     
                if (curr%j != 0) {
                    flag = false;
                    break;
                }
            }
       }

       if (flag) {
           break;
       }

       i++;
    }

    cout << curr << endl;
    return 0;
}
