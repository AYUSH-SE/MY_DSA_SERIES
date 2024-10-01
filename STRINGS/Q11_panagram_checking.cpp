#include<bits/stdtr1c++.h>
using namespace std;

bool checkPangram(string s) {
    unordered_set<char> unique;
    for(char c : s){
        if(isalpha(c)) {  
            unique.insert(tolower(c));  
        }
    }
    return unique.size() >= 26;
}
int main(){
    string s;
    getline(cin,s);
    cout<<checkPangram(s);
}