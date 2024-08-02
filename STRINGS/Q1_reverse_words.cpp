#include<bits/stdtr1c++.h>
using namespace std;

string reverseWords(string s) 
    { 
        string str="";
        string st="";
        
        for(int i=0;i<=s.size();i++)
        {
            if(s[i]=='.')
            {
                st=str+st;
                st="."+st;
                str="";
            }
            else
            {
                str+=s[i];
            }
        }
        
        st=str+st;
        
        return st;
}
int main(){
    string s;
    cin>>s;
    cout<<reverseWords(s);
}