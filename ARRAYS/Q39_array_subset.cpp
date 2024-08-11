#include<bits/stdtr1c++.h>
using namespace std;

string isSubset(int a1[], int a2[], int n, int m) {
    unordered_map<int,int>freq;
    for(int i=0;i<n;i++){
        freq[a1[i]]++;
    }
    for(int i=0;i<m;i++){
        if(freq[a2[i]]==0) return "No";
        else freq[a2[i]]--;
    }
    return "Yes";
}
int main(){
    int n,m;
    cin>>n;
    cin>>m;
    int a1[n];
    int a2[m];
    for(int i=0;i<n;i++){
        cin>>a1[i];
    }
    cout<<endl;
    for(int i=0;i<m;i++){
        cin>>a2[i];
    }
    cout<<isSubset(a1,a2,n,m);
    return 0;
}