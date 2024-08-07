#include<bits/stdtr1c++.h>
using namespace std;
long long maxSubarraySum(vector<int> arr,int n) {
        long long sum=0;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum>maxi){
                maxi=sum;
            }
            if(sum<0){
                sum=0;
            }
        }
        return maxi;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<maxSubarraySum(arr,n);
    return 0;
}