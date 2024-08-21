#include<bits/stdtr1c++.h>
using namespace std;
bool areIsomorphic(string str1, string str2)
    {
        if (str1.length() != str2.length()) {
        return false;
    }
    unordered_map<char, char> map1;
    unordered_map<char, bool> map2;

    for (size_t i = 0; i < str1.length(); ++i) {
        char original = str1[i];
        char replacement = str2[i];

        if (map1.find(original) == map1.end()) {
            if (map2.find(replacement) == map2.end()) {
                map1[original] = replacement;
                map2[replacement] = true;
            } else {
                return false;
            }
        } else {
            char mappedCharacter =map1[original];
            if (mappedCharacter != replacement) {
                return false;
            }
        }
    }
    return true;
}

int main(){
    string str1,str2;
    cin>>str1;
    cin>>str2;
    if(areIsomorphic(str1,str2)){
        cout<<"strings are isomorphic";
    }
    else{
        cout<<"strings are not isomorphic";
    }
    return 0;
}