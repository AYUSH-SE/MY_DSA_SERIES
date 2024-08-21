#include<bits/stdtr1c++.h>
using namespace std;
long findIndex(string& str) {
    long opencount = 0;
    long totalclose = 0;
    int n=str.length();
    for (char ch : str) {
        if (ch == ')') totalclose++;
    }

    long closecount = totalclose;

    for (int i = 0; i <n; i++) {
        if (str[i] == '(') {
            opencount++;
        }
        else if (str[i] == ')') {
            closecount--;
        }
        if (opencount == closecount) {
            return i + 1; 
        }
    }
    return 0;
}

int main(){
    string str;
    int n=str.length();
    cin>>str;
    cout<<findIndex(str);
    return 0;
}