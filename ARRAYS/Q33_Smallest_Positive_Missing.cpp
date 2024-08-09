#include<bits/stdtr1c++.h>
using namespace std;
int missingNumber(int arr[], int n) 
    {
    vector<bool> present(n + 1, false);
    
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0 && arr[i] <= n) {
            present[arr[i]] = true;
        }
    }
    
    for (int i = 1; i <= n; i++) {
        if (!present[i]) {
            return i;
        }
    }
    
    return n + 1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<missingNumber(arr,n);
    return 0;
}