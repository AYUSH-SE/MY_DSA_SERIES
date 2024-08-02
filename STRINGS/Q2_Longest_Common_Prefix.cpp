#include<bits/stdtr1c++.h>
using namespace std;

string longestCommonPrefix(vector<string> arr,int n) {
    string res="";;
    sort(arr.begin(),arr.end());

    string first=arr.front();
    string last=arr.back();

    int min_length=min(first.size(),last.size());
    for(int i=0;i<min_length;i++){
        if(first[i]==last[i]){
            res+=first[i];
        }
        else{
            break;
        }
    }
    return res;
}

int main(){
    int n;
    cin>>n;
    vector<string>arr(n);
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }
    cout<<longestCommonPrefix(arr,n);
}
