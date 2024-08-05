#include<bits/stdtr1c++.h>
using namespace std;
int firstNonRepeating(vector<int>& arr,int n) {
        unordered_map<int,int> freq;
        for(int i=0;i<n;i++){
            freq[arr[i]]++;
        }
        for(int i=0;i<n;i++){
            if(freq[arr[i]]==1){
                return arr[i];
                break;
            }
        }
    return 0;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<firstNonRepeating(arr,n);
    return 0;
}