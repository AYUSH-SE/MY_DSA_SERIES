
#include <bits/stdc++.h>
using namespace std;

int romanToDecimal(string &str) {
    unordered_map<char, int> mp;
    mp['I'] = 1;
    mp['V'] = 5;
    mp['X'] = 10;
    mp['L'] = 50;
    mp['C'] = 100;
    mp['D'] = 500;
    mp['M'] = 1000;

    int res = mp[str.back()];  // Initialize with the last character's value

    for (int i = str.size() - 2; i >= 0; --i) {
        if (mp[str[i]] < mp[str[i + 1]]) {
            res -= mp[str[i]];
        } else {
            res += mp[str[i]];
        }
    }
    return res;
}

int main() {
    string str = "MCMXCIV";
    cout << romanToDecimal(str) << endl; // Output should be 1994
    return 0;
}
