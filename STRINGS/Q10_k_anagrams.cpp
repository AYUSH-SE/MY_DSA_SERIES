#include<bits/stdtr1c++.h>
using namespace std;

bool areKAnagrams(string str1, string str2, int k) {
    unordered_map<char,int>hash;
    for(char ch:str1){
        hash[ch]++;
    }
    for(char ch:str2){
        if(hash[ch]>0){
            hash[ch]--;
        }
    }
    int changes=0;
    for(auto it:hash){
        changes+=it.second;
    }
    return changes<=k;
}

int main(){
    string str1,str2;
    cin>>str1>>str2;
    int k;
    cin>>k;
    if(areKAnagrams(str1,str2,k)){
        cout<<"k-anagrams";
    }
    else{
        cout<<"not k-anagrams";
    }
    return 0;
}