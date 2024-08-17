#include<bits/stdtr1c++.h>
using namespace std;

bool canPartitionHelper(const vector<int>& arr, int target, int index) {
    if (target == 0) return true; 
    if (index >= arr.size() || target < 0) return false; 
    
    return canPartitionHelper(arr, target - arr[index], index + 1) || 
           canPartitionHelper(arr, target, index + 1);
    }
    
int equalPartition(int N, int arr[]) {
    int totalSum = 0;
    
    for (int i = 0; i < N; i++) {
        totalSum += arr[i];
    }

    if (totalSum % 2 != 0) return 0;

    int target = totalSum / 2;

    return canPartitionHelper(vector<int>(arr, arr + N), target, 0);
}

int main(){
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    cout<<equalPartition(N,arr);
    return 0;
}