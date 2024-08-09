#include<bits/stdtr1c++.h>
using namespace std;

int minJumps(int arr[], int n) {
    if (arr[0] == 0 && n > 1) return -1;  
    if (n == 1) return 0;                 

    int total_jumps = 0;
    int destination = n - 1;
    int coverage = 0;
    int last_jump_idx = 0;

    for (int i = 0; i < n; i++) {
        coverage = max(coverage, i + arr[i]);

        
        if (i == last_jump_idx) {
            last_jump_idx = coverage;
            total_jumps++;
            
            if (coverage >= destination) {
                return total_jumps;
            }
            
            if (i == last_jump_idx) {
                return -1;
            }
        }
    }
    return -1; 
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<minJumps(arr,n);
    return 0;
}