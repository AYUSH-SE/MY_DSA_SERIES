#include <bits/stdc++.h>
using namespace std;

int peakElement(int arr[], int n) {
    // Edge case for single element
    if (n == 1) {
        return 0;
    }
    
    // Check if the first element is a peak
    if (arr[0] >= arr[1]) {
        return 0;
    }
    
    // Check if the last element is a peak
    if (arr[n - 1] >= arr[n - 2]) {
        return n - 1;
    }
    
    // Check for peaks in the middle of the array
    for (int i = 1; i < n - 1; i++) {
        if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1]) {
            return i;
        }
    }
    
    // If no peak found (shouldn't reach here with valid inputs)
    return -1;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << peakElement(arr, n);
    return 0;
}
