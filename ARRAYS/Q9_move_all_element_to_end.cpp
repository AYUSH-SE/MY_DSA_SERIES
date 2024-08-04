#include <iostream>
#include <vector>
using namespace std;

void moveNegativesToEnd(vector<int>& arr) {
    int n = arr.size();
    int left = 0, right = 0;

    while (right < n) {
        if (arr[right] >= 0) {
            // Swap the elements to maintain order
            swap(arr[left], arr[right]);
            left++;
        }
        right++;
    }
}

int main() {
    vector<int> arr = {1, -1, 3, 2, -7, -5, 11, 6};
    moveNegativesToEnd(arr);

    for (int i = 0; i < arr.size(); ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    vector<int> arr2 = {-5, 7, -3, -4, 9, 10, -1, 11};
    moveNegativesToEnd(arr2);

    for (int i = 0; i < arr2.size(); ++i) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    return 0;
}
