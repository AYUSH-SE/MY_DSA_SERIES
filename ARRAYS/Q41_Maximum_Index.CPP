#include<bits/stdtr1c++.h>
using namespace std;

    int maxIndexDiff(vector<int> arr, int n) {
    if(n==1) return 0;
    vector<int> left_min(n), right_max(n);
    
    left_min[0] = arr[0];
    for (int i = 1; i < n; i++) {
        left_min[i] = min(left_min[i - 1], arr[i]);
    }

    right_max[n - 1] = arr[n - 1];
    for (int j = n - 2; j >= 0; j--) {
        right_max[j] = max(right_max[j + 1], arr[j]);
    }

    int i = 0, j = 0, max_diff = -1;
    while (i < n && j < n) {
        if (left_min[i] <= right_max[j]) {
            max_diff = max(max_diff, j - i);
            j++;
        } else {
            i++;
        }
    }
    return max_diff;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int ele:arr){
        cin>>ele;
    }
    cout<<maxIndexDiff(arr,n);
    return 0;
}