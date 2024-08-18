#include<bits/stdtr1c++.h>
using namespace std;
int isdivisible7(string num){
       int ans=0;
       int n=num.size();
       for(int i=0;i<n;i++){
           ans=ans*10+(num[i]-'0');
           ans=ans%7;
        }
        return ans==0 ? true:false;
}

int main(){
    string num;
    cin>>num;
    if(isdivisible7(num)) cout<<"1";
    else cout<<"0";
    return 0;
}