#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>
using namespace std;

int main() {

    // allocating a vector of 100 rows and 50 columns 
    vector<vector<int>> nums(100,vector<int>(10,0));

    // iterate over last column, keep in mind the carry, and compute digit 
    // push digit onto stack, continue to next (100 rows can have max carry val of what? 90 lol)
    // any number greater than 9 results in a carry

    ifstream file("../input/ep13.txt");
    char ch;
    int r = 0;
    int c = 0;
    int digit = 0;
    int num = 0;

    long long sum = 0;

    while (file.get(ch)) {

        cout << atoi(&ch);
    }
    
    return 0;
}
