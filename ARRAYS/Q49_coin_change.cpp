#include <bits/stdc++.h>
using namespace std;

long long int countWays(int coins[], int N, int sum) {
    if (sum == 0) return 1;  
    if (sum < 0) return 0;   
    if (N <= 0 && sum >= 1) return 0;  

    return countWays(coins, N - 1, sum)     
         + countWays(coins, N, sum - coins[N - 1]);  
}

int main() {
    int N,sum;
    cin>>N;
    cin>>sum;
    int coins[N];
    for(int i=0;i<N;i++){
        cin>>coins[i];
    }
    cout << countWays(coins, N, sum) << endl;  

    return 0;
}
