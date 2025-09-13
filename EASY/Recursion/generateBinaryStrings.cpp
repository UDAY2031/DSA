// Recursion to generate binary strings without consecutive 1s

#include<bits/stdc++.h>
using namespace std;

void function1(int n, int lastplace, string ans){
    if(n == 0){                           // Base case: no more digits left
        cout << ans << "\n";              // Print the generated string
        return;
    }

    if(lastplace != 1){                   // If last digit is NOT 1
        function1(n - 1, 0, ans + '0');   // Place '0' at current position
        function1(n - 1, 1, ans + '1');   // Place '1' at current position
    }else{
        function1(n - 1, 0, ans + '0');   // If last digit was 1, only place '0'
    }
}

int main(){
    int n = 3;        // Length of binary strings
    string ans = "";  // Start with empty string
    function1(n, 0, ans);  // Call function with lastplace = 0
    return 0;
}
