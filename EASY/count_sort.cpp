#include<bits/stdc++.h>
using namespace std;

void count_sort(int *arr,int n){
    int freq[10000] = {0};
    int minval = INT_MAX, maxval = INT_MIN;
    for(int i = 0;i < n;i++){
        freq[arr[i]]++;
        minval = min(minval, arr[i]);
        maxval = max(maxval, arr[i]);
    }
    for(int i = minval, j =0; i <= maxval; i++){
        while(freq[i] > 0){
            arr[j++] = i;
            freq[i]--;
        }
    }
    for(int i = 0;i < n;i++){ 
        cout<<arr[i];
    }
}
int main(){
    int arr[] = {0,1,0,2,1,0,1,3,2,1,2,1};
    int n = sizeof(arr)/sizeof(int);
    count_sort(arr,n);
    return 0;
}
