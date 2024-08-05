#include <iostream>
#include <algorithm>
using namespace std;

int partition(int arr[], int low, int high) {
    int pivot = arr[low];
    int i = low + 1;
    int j = high;
    
    while (true) {
        while (i <= high && arr[i] <= pivot) {
            i++;
        }
        while (arr[j] > pivot) {
            j--;
        }
        if (i >= j) break;
        swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int piv = partition(arr, low, high);
        quickSort(arr, low, piv - 1);
        quickSort(arr, piv + 1, high);
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    quickSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
