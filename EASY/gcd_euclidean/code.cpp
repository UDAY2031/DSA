#include <bits/stdc++.h>
using namespace std;

int main() {
    int n1;
    cout << "Enter number: ";
    cin >> n1;
    
    int n2;
    cout << "Enter number: ";
    cin >> n2;

    // Using Euclidean Algorithm to find GCD
    while (n1 > 0 && n2 > 0) {
        if (n1 > n2) 
            n1 = n1 % n2;
        else 
            n2 = n2 % n1;
    }

    // Print the GCD
    if (n1 == 0) 
        cout << "GCD: " << n2;
    else 
        cout << "GCD: " << n1;

    return 0;
}
