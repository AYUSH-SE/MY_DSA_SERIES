#include <iostream>
#include <vector>
using namespace std;

vector<int> commonElements(vector<int> arr1, vector<int> arr2, vector<int> arr3) {
    vector<int> ans;
    int n1 = arr1.size();
    int n2 = arr2.size();
    int n3 = arr3.size();
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2 && k < n3) {
        if (arr1[i] == arr2[j] && arr2[j] == arr3[k]) {
            ans.push_back(arr1[i]);
            i++;
            j++;
            k++;
            
            // Skip duplicates in arr1
            while (i < n1 && arr1[i] == arr1[i - 1]) {
                i++;
            }
            // Skip duplicates in arr2
            while (j < n2 && arr2[j] == arr2[j - 1]) {
                j++;
            }
            // Skip duplicates in arr3
            while (k < n3 && arr3[k] == arr3[k - 1]) {
                k++;
            }
        } else if (arr1[i] < arr2[j]) {
            i++;
        } else if (arr2[j] < arr3[k]) {
            j++;
        } else {
            k++;
        }
    }
    return ans;
}

int main() {
    vector<int> arr1 = {1, 2, 2, 3, 4, 5};
    vector<int> arr2 = {2, 2, 6, 7, 8, 9};
    vector<int> arr3 = {2, 2, 10, 11, 13, 14};
    vector<int> result = commonElements(arr1, arr2, arr3);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    return 0;
}
