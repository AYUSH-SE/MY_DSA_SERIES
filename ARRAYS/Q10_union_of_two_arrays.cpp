#include<bits/stdtr1c++.h>
using namespace std;

int doUnion(int a[], int n, int b[], int m)  {
        set<int> s;
        for(int i=0;i<n;i++){
            s.insert(a[i]);
        }
        for(int i=0;i<m;i++){
            s.insert(b[i]);
        }
        return s.size();
}

int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    int a[n];
    int b[m];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<endl;
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    cout<<endl;

    cout<<doUnion(a,n,b,m);
}