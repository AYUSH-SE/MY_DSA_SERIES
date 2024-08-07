#include <iostream>
#include <vector>
using namespace std;

void multiply(int x, vector<int>& res, int& res_size) {
    int carry = 0;  
    
    for (int i = 0; i < res_size; i++) {
        int prod = res[i] * x + carry;
        res[i] = prod % 10;  
        carry = prod / 10;   
    }
    
    while (carry) {
        res[res_size] = carry % 10;
        carry /= 10;
        res_size++;
    }
}

vector<int> factorial(int n) {
    vector<int> res(1000, 0);  
    int res_size = 1;    
    
    res[0] = 1;               
    for (int x = 2; x <= n; x++) {
        multiply(x, res, res_size);
    }
    vector<int> result(res_size);
    for (int i = 0; i < res_size; i++) {
        result[i] = res[res_size - i - 1];
    }
    
    return result;
}

int main() {
    int n;
    cin >> n;
    
    vector<int> result = factorial(n);
    for (int digit : result) {
        cout << digit;
    }
    cout << endl;
    
    return 0;
}
