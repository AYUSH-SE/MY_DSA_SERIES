#include <iostream>
#include <vector>
using namespace std;

void rearrange(int arr[], int n) {
    int pos = 0;
    int neg = 1;
    vector<int> res(n, 0);

    // Place positive and negative numbers in the result vector
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            if (neg < n) {
                res[neg] = arr[i];
                neg += 2;
            }
        } else {
            if (pos < n) {
                res[pos] = arr[i];
                pos += 2;
            }
        }
    }

    // Copy the result vector back to the original array
    for (int i = 0; i < n; i++) {
        arr[i] = res[i];
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    rearrange(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
