#include<bits/stdtr1c++.h>
using namespace std;

long long max_sum(int a[], int n) {
    long long initial=0,sum=0;
    long long maxi=0;
        for(int i=0;i<n;i++){
            sum+=a[i];
            initial+=((long)i * a[i]);
        }
        maxi=initial;
        for(int i=1;i<n;i++){
            long long next=((long long)a[i-1]*n)-sum+initial;
            maxi=max(maxi,next);
            initial=next;
        }
    return maxi;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<max_sum(a,n);
    return 0;
}