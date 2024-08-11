#include<bits/stdtr1c++.h>
using namespace std;

vector<int> findTwoElement(vector<int> arr, int n) {
        int hash[n+1]={0};
        for(int i=0;i<n;i++){
            hash[arr[i]]++;
        }
        int missing=-1,repeating=-1;
        for(int i=1;i<=n;i++){
            if(hash[i]>1) repeating= i;
            else if(hash[i]==0) missing =i;
        }
    return {repeating,missing};
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>res=findTwoElement(arr,n);
    for(int ele:res){
        cout<<ele<<" ";
    }
    return 0;
}