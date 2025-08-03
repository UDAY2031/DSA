#include<bits/stdc++.h>
using namespace std;


void maxSubarraySum(int *arr,int n){
    int maxsum = INT_MIN;
    for(int start = 0; start < n; start++){
        int cursum = 0;
        for(int end = start; end < n; end++){
            cursum += arr[end];
            maxsum = max(maxsum,cursum);
        }
    }
    cout<<"Maximum sum is :" << maxsum<<endl;
}
int main(){
    int arr[6] = {2,-3,6,-5,4,2};
    int n = 6;
    maxSubarraySum(arr,n);
    return 0;
}
