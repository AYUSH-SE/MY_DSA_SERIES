#include<bits/stdtr1c++.h>
using namespace std;

int getMinDiff(int arr[], int n, int k) {
       sort(arr,arr+n);
       int maxi=arr[n-1];
       int mini=arr[0];
       int res=maxi-mini;
       for(int i=1;i<n;i++){
       if(arr[i]>=k){
           maxi=max(arr[n-1]-k,arr[i-1]+k);
           mini=min(arr[0]+k,arr[i]-k);
           res=min(res,maxi-mini);
       }
    }
    return res;
}

int main(){
    int n,k;
    cin>>n;
    cin>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<getMinDiff(arr,n,k);
    return 0;
}