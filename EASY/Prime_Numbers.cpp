#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    int c = 0;

    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            c++; // Count i as a divisor
            if ((n / i) != 1) {
                c++; // Count the corresponding divisor n / i if it's not the same as i and not 1
            }
        }
    }

    if (c == 2) 
        cout << "Prime";
    else 
        cout << "Not Prime";
}
