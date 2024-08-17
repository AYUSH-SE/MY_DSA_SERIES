#include<bits/stdtr1c++.h>
using namespace std;
long long findMinDiff(vector<long long> a, long long n, long long m){
        long long min_diff=INT_MAX;
        long long d=0;
        sort(a.begin(),a.end());
        for(int i=0;i+m-1<n;i++){
            d=a[i+m-1]-a[i];
            min_diff=min(d,min_diff);
        }
    return min_diff;
}

int main(){
    long long n,m;
    cin>>n;
    cin>>m;
    vector<long long >a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<findMinDiff(a,n,m);
    return 0;
    
}