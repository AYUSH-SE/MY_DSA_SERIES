#include<bits/stdtr1c++.h>
using namespace std;
bool two_sum(int sum1, int start, int end, int arr[]) {
    unordered_map<int, int> mp;
    for (int i = start; i < end; i++) { 
        mp[arr[i]]++;
    }
    for (int i = start; i < end; i++) {  
        int sum2 = sum1 - arr[i];
        if (mp.find(sum2) != mp.end() && mp[sum2] > 0 && sum2 != arr[i]) {  
            return true;
        }
    }
    return false;
}

bool find3Numbers(int arr[], int n, int x) {
    for (int i = 0; i < n - 1; i++) {  
        int sum1 = x - arr[i]; 
        if (two_sum(sum1, i + 1, n, arr)) {
            return true;
        }
    }
    return false;
}
int main(){
    int n,x;
    cin>>n;
    cin>>x;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<find3Numbers(arr,n,x);
    return 0;
}