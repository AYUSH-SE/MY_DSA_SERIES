#include<bits/stdtr1c++.h>
using namespace std;

int max_path_sum(vector<int> &arr1, vector<int> &arr2, int n, int m) {
    int i = 0, j = 0, ans = 0, sum1 = 0, sum2 = 0;
    
    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) {
            sum1 += arr1[i];
            i++;
        } else if (arr1[i] > arr2[j]) {
            sum2 += arr2[j];
            j++;
        } else {
            ans += max(sum1, sum2);
            sum1 = 0;
            sum2 = 0;
            while (i < n && j < m && arr1[i] == arr2[j]) {
                ans += arr1[i];
                i++;
                j++;
            }
        }
    }
    while (i < n) {
        sum1 += arr1[i];
        i++;
    }
    while (j < m) {
        sum2 += arr2[j];
        j++;
    }
    ans += max(sum1, sum2);
    return ans;     
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> arr1(n), arr2(m);

    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    cout<<endl;
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }

    cout << max_path_sum(arr1, arr2, n, m) << endl;
}
