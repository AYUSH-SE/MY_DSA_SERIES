#include<bits/stdtr1c++.h>
using namespace std;

vector <int> calculateSpan(int price[], int n)
{
    vector<int> res(n);
    for (int i = 0; i < n; ++i) {
        int span = 1;
        int j = i - 1;
        while (j >= 0 && price[j] <= price[i]) {
            span += res[j]; 
            j -= res[j];    
        }
        res[i] = span;
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    int price[n];
    for(int i=0;i<n;i++){
        cin>>price[i];
    }
    vector<int>result=calculateSpan(price,n);
    for(int i=0;i<n;i++){
        cout<<result[i]<<" ";
    }
    return 0;
}