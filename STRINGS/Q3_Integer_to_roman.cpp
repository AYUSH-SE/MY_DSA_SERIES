#include<bits/stdtr1c++.h>
using namespace std;

string intToRoman(int num) {
    // Arrays for integer and Roman numeral representations
    vector<int> intCode = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    vector<string> code = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    
    string result;
    
    // Iterate through the integer codes
    for (int i = 0; i < intCode.size(); i++) {
        // Append corresponding Roman numeral to result while num is greater or equal
        while (num >= intCode[i]) {
            result += code[i];
            num -= intCode[i];
        }
    }
    
    return result;
}

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    cout << "Roman numeral: " << intToRoman(num) << endl;
    return 0;
}
