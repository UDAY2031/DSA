#include <bits/stdc++.h>
using namespace std;

// Partition function: places pivot in correct position
int partition(int arr[], int si, int ei) {
    int i = si - 1;          // pointer for smaller elements
    int pivot = arr[ei];     // choose last element as pivot

    // Traverse from si to ei-1
    for (int j = si; j < ei; j++) {
        if (arr[j] <= pivot) {   // if current element <= pivot
            i++;                 // move boundary for smaller elements
            swap(arr[i], arr[j]); // place element into left side
        }
    }

    // Place pivot in correct sorted position
    i++;
    swap(arr[i], arr[ei]);

    return i; // return pivot index
}

// QuickSort function
void QS(int arr[], int si, int ei) {
    if (si >= ei) {
        return; // base case: 1 or 0 elements
    }

    int pivotIdx = partition(arr, si, ei); // partition array

    QS(arr, si, pivotIdx - 1);   // sort left side of pivot
    QS(arr, pivotIdx + 1, ei);   // sort right side of pivot
}

// Function to print array
void printarr(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ",";
    }
    cout << endl;
}

int main() {
    int arr[6] = {5, 4, 3, 6, 2, 1};
    int n = 6;

    QS(arr, 0, n - 1);    // call QuickSort
    printarr(arr, n);     // print sorted array

    return 0;
}
