#include <bits/stdc++.h>
using namespace std;

// Function to merge two sorted halves
void mer(int arr[], int si, int mid, int ei) {
    int i = si;          // pointer for left half
    int j = mid + 1;     // pointer for right half
    vector<int> temp;    // temporary array to store merged result

    // Merge both halves while both have elements
    while (i <= mid && j <= ei) {
        if (arr[i] <= arr[j]) {
            temp.push_back(arr[i++]); // take element from left half
        } else {
            temp.push_back(arr[j++]); // take element from right half
        }
    }

    // Copy remaining elements of left half (if any)
    while (i <= mid) {
        temp.push_back(arr[i++]);
    }

    // Copy remaining elements of right half (if any)
    while (j <= ei) {
        temp.push_back(arr[j++]);
    }

    // Copy merged elements back into original array
    for (int k = si, x = 0; k <= ei; k++) {
        arr[k] = temp[x++];
    }
}

// Recursive merge sort function
void mergesort(int arr[], int si, int ei) {
    // Base case: if only one element
    if (si >= ei) {
        return;
    }

    int mid = si + (ei - si) / 2;  // find middle index

    mergesort(arr, si, mid);       // sort left half
    mergesort(arr, mid + 1, ei);   // sort right half

    mer(arr, si, mid, ei);         // merge both halves
}

// Function to print array
void printarr(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ",";
    }
}

int main() {
    int arr[6] = {5, 4, 3, 6, 2, 1};
    int n = 6;

    mergesort(arr, 0, n - 1);  // call merge sort
    printarr(arr, n);          // print sorted array

    return 0;
}
