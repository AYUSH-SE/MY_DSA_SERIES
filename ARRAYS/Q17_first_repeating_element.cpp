#include<bits/stdtr1c++.h>
using namespace std;

int firstRepeated(vector<int> &arr,int n) {
        unordered_map<int,int> freq;
        for(int i=0;i<n;i++){
        
            freq[arr[i]]++;
        }
        
        for(int i=0;i<n;i++){
            if(freq[arr[i]]>1){
                return i+1;
                break;
            }
        }
        return -1;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<firstRepeated(arr,n);
}