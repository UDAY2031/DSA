#include <bits/stdc++.h> // Includes all standard libraries
using namespace std;

int main() {
    int n;
    
    // Input the number
    cout << "Enter a number: ";
    cin >> n;
    
    // Check and print all divisors of the number
    cout << "Divisors of " << n << " are: ";
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
    
    return 0;
}
