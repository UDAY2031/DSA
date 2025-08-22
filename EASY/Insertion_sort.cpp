#include<bits/stdc++.h>
using namespace std;

void Insertion(int *arr,int n){
    for(int i = 1; i < n;i++){
        int temp = arr[i];
        int prev = i - 1;
        while(prev >= 0 && arr[prev] > temp){
            swap(arr[prev],arr[prev+1]);
            prev--;
        }
        arr[prev+1] = temp;
    }
    for(int i = 0;i < n;i++){ 
        cout<<arr[i];
    }
}
int main(){
    int arr[] = {0,1,0,2,1,0,1,3,2,1,2,1};
    int n = sizeof(arr)/sizeof(int);
    Insertion(arr,n);
    return 0;
}
