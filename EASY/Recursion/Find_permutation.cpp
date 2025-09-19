#include <bits/stdc++.h>
using namespace std;

// Generate all permutations of a string
void permutation(string str1, string ans){
    int n = str1.size();
    
    if(n == 0){               // Base case: string empty → print permutation
        cout << ans << '\n';
        return;
    }
    
    for(int i = 0; i < n; i++){       // Loop through all characters
        char ch = str1[i];            // Pick character at i
        // Recur for remaining string, append picked char to answer
        permutation(str1.substr(0,i) + str1.substr(i+1, n-i-1), ans + ch);
    }
}

int main(){
    string str1 = "abc"; // Input string
    string ans = "";     // To store current permutation
    permutation(str1, ans); // Call function
    return 0;
}
