#include<bits/stdtr1c++.h>
using namespace std;
int majorityElement(int a[], int n)
{
    unordered_map<int,int>freq;
        for(int i=0;i<n;i++){
            freq[a[i]]++;
        }
        for(int i=0;i<n;i++){
            if(freq[a[i]]>n/2) return a[i];
        }
    return -1;   
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<majorityElement(a,n);
    return 0;
}