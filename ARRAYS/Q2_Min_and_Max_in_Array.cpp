#include <bits/stdc++.h>
using namespace std;

pair<long long, long long> getMinMax(vector<long long int> arr) {
    long long maxi = arr[0];
    long long mini = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        if (maxi < arr[i]) {
            maxi = arr[i];
        }
        if (mini > arr[i]) {
            mini = arr[i];
        }
    }
    return make_pair(mini, maxi);
}

int main() {
    int n;
    cin >> n;
    vector<long long int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Get the minimum and maximum values
    pair<long long, long long> minMax = getMinMax(arr);

    // Print the minimum and maximum values
    cout << "Minimum: " << minMax.first << endl;
    cout << "Maximum: " << minMax.second << endl;

    return 0;
}
