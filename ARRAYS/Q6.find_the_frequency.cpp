#include<bits/stdtr1c++.h>
using namespace std;
int findFrequency(vector<int> Arr, int n,int X){
    int count=0;
    for(int i=0;i<n;i++){
        if(Arr[i]==X){
            count++;
        }
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    int x;
    cin>>x;
    vector<int>Arr(n);
    for(int i=0;i<n;i++){
        cin>>Arr[i];
    }
    cout<<findFrequency(Arr,n,x);
}