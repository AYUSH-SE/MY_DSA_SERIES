#include <iostream>
#include <vector>
using namespace std;

vector<int> subarraySum(vector<int>& arr, int n, long long s) {
    long long sum = 0;
    int start = 0;

    if (s == 0) {
        return {-1};
    }

    for (int end = 0; end < n; end++) {
        sum += arr[end];

        while (sum > s && start <= end) {
            sum -= arr[start];
            start++;
        }

        if (sum == s) {
            return {start + 1, end + 1}; // Returning 1-based indices
        }
    }

    return {-1}; // If no subarray with sum `s` is found
}

int main() {
    int n;
    cin >> n;
    long long s;
    cin >> s;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> result = subarraySum(arr, n, s);
    for(int i=0;i<n;i++){
        cout<<result[i]<<" ";
    }
    return 0;
}
