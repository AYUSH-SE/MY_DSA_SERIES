#include <iostream>
using namespace std;

void sort(int arr[], int n) {
    int low = 0;
    int mid = 0;
    int high = n - 1;
    
    while (mid <= high) { // Note: changed from low < high to mid <= high
        if (arr[mid] == 0) {
            swap(arr[mid], arr[low]);
            low++;
            mid++;
        } else if (arr[mid] == 1) {
            mid++;
        } else if (arr[mid] == 2) {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main() {
    int n;
    cout << "Enter the range: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements (0s, 1s, and 2s):" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
