#include<bits/stdc++.h>
using namespace std;

int maxSubarraySum(int *arr,int n){
    int maxsum = INT_MIN;
    int cursum = 0;
    for(int i = 0; i < n; i++){
        cursum += arr[i];
        if(cursum < 0){
            cursum = 0;
        }
        maxsum = max(maxsum,cursum);
    }
    cout<<"Maximum sum is :" << maxsum<<endl;
}
int main(){
    int arr[] = {2,-3,6,-5,4,2};
    int n = 6;
    maxSubarraySum(arr,n);
    return 0;
}
