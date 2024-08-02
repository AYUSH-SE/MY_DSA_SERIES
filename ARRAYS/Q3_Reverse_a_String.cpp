#include<bits/stdtr1c++.h>
using namespace std;

string reverseWord(string str)
{
    int left=0;
    int right=str.length()-1;
        while(left<right){
            swap(str[left],str[right]);
            left++;
            right--;
        }
    return str;
}

int main(){
    string str;
    cin>>str;
    cout<<reverseWord(str);
}