#include<bits/stdc++.h>
using namespace std;

void selection(int *arr,int n){
    for(int i = 0;i < n-1;i++){
        int minidx = i;
        for(int j = i+1; j<n;j++){
            if(arr[j] < arr[minidx]){
                minidx = j;
            }
            
        }
        swap(arr[i],arr[minidx]);
    }
    for(int i = 0;i < n;i++){ 
        cout<<arr[i];
    }
}
int main(){
    int arr[] = {0,1,0,2,1,0,1,3,2,1,2,1};
    int n = sizeof(arr)/sizeof(int);
    selection(arr,n);
    return 0;
}
