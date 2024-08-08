#include<bits/stdtr1c++.h>
using namespace std;

long long maxProduct(vector<int> arr, int n) {
	    long long leftproduct=1;
	    long long rightproduct=1;
	    long long ans=arr[0];
	    
	    for(int i=0;i<n;i++){
	        if(leftproduct==0) leftproduct=1;
	        if(rightproduct==0) rightproduct=1;
	        
	        leftproduct=leftproduct*arr[i];
	        rightproduct=rightproduct*arr[n-1-i];
	        
	        ans=max(ans,(long long)leftproduct);
	        ans=max(ans,(long long)rightproduct);
	    }
	    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<maxProduct(arr,n);
    return 0;
}