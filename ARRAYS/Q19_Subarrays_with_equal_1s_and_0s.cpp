#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
long long int countSubarrWithEqualZeroAndOne(int arr[], int n)
    {
        int sum=0;
        int ans=0;
        unordered_map<int,int>mp;
        mp[0]=1;
        
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                sum-=1;
            }
            else{
                sum+=1;
            }
            if(mp.find(sum)!=mp.end()){
                ans+=mp[sum];
                mp[sum]++;
            }
            else{
                mp[sum]=1;
            }
        }
        return ans;    
   }

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[n];
    }
    cout<<countSubarrWithEqualZeroAndOne(arr,n);
    return 0;
}