#include<bits/stdtr1c++.h>
using namespace std;
string encryptString(string S,int n) {
        string ans="";
        int count=1;
        for(int i=n-1;i>=0;i--){
            if(S[i]==S[i-1]) count++;
            else{
                stringstream stru;
                stru<<hex<<count;
                string s(stru.str());
                ans.append(s);
                ans.push_back(S[i]);
                count=1;
            }
        }
        return ans;
}

int main() {
    string S;
    cout << "Enter the string: ";
    cin >> S; 
    int n = S.length();
    string result = encryptString(S, n);
    cout << "Encrypted String: " << result << endl;
    return 0;
}