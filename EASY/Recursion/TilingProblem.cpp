#include <bits/stdc++.h>
using namespace std;

// Function to count the number of ways to tile a 2 x n board
// using 2 x 1 tiles (placed vertically or horizontally)
int tiling(int n){
    if(n == 0 || n == 1){      // base cases:
        return 1;              // 1 way to tile if length is 0 or 1
    }
    // Recurrence relation:
    // - Place one vertical tile → solve remaining (n-1)
    // - Place two horizontal tiles → solve remaining (n-2)
    return tiling(n - 1) + tiling(n - 2);
}

int main(){
    cout << tiling(5);   // Example: number of ways to tile 2 x 5 board
    return 0;
}
