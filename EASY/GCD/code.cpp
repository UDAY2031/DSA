#include <bits/stdc++.h>
using namespace std;

int main() {
    int n1;
    cout << "Enter number: ";
    cin >> n1;
    
    int n2;
    cout << "Enter number: ";
    cin >> n2;

    for (int i = min(n1, n2); i >= 1; i--) {
        if (n1 % i == 0 && n2 % i == 0) {
            cout << "GCD: " << i;
            break;
        }
    }

    return 0;
}
