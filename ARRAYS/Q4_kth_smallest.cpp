#include <iostream>
#include <algorithm>
using namespace std;

// Partition function similar to the one used in QuickSort
int partition(int arr[], int l, int r) {
    int pivot = arr[r];
    int i = l;
    for (int j = l; j < r; j++) {
        if (arr[j] <= pivot) {
            swap(arr[i], arr[j]);
            i++;
        }
    }
    swap(arr[i], arr[r]);
    return i;
}

// Function to find the kth smallest element
int kthSmallest(int arr[], int l, int r, int k) {
    if (k > 0 && k <= r - l + 1) {
        int index = partition(arr, l, r);

        if (index - l == k - 1) {
            return arr[index];
        }

        if (index - l > k - 1) {
            return kthSmallest(arr, l, index - 1, k);
        }

        return kthSmallest(arr, index + 1, r, k - index + l - 1);
    }

    return INT_MAX; // if k is out of bounds
}

int main() {
    int arr[] = {7, 10, 4, 3, 20, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    cout << "Kth smallest element is " << kthSmallest(arr, 0, n - 1, k) << endl;
    return 0;
}
