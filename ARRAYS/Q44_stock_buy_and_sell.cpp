#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> stockBuySell(vector<int> A, int n) {
    vector<vector<int>> ans;
    int buy = 0;
    int sell = 0;

    for (int i = 0; i < n - 1; i++) {  
        if (A[i + 1] > A[i]) {
            sell = i + 1;  
        } else {
            if (sell > buy) {  
                ans.push_back({buy, sell});
            }
            buy = i + 1;
            sell = i + 1;
        }
    }

    if (sell > buy) {
        ans.push_back({buy, sell});
    }

    return ans;
}

int main() {
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    vector<vector<int>> result = stockBuySell(A, n);

    if (result.empty()) {
        cout << "No transactions are possible" << endl;
    } else {
        for (const auto& transaction : result) {
            cout << "Buy on day " << transaction[0] << " and Sell on day " << transaction[1] << endl;
        }
    }

    return 0;
}
