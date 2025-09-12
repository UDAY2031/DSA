#include <bits/stdc++.h>
using namespace std;

// Function to calculate x^n using recursion
int pow(int x, int n){

    if(n == 0) return 1;              // base case: x^0 = 1

    int halfpower = pow(x, n/2);      // recursively calculate x^(n/2)
    int power = halfpower * halfpower; // square the result → (x^(n/2))^2

    if(n % 2 != 0) {                  // if n is odd
        return x * power;             // multiply one extra x
    }
    return power;                     // if n is even, return directly
}

int main(){
    cout << pow(2,2);                 // example: 2^2 = 4
    return 0;
}
