#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0;
    while (n > 0) {
        int last_digit = n % 10;
        count += 1;
        n = n / 10;
    }

    cout << count;
    return 0;
}
