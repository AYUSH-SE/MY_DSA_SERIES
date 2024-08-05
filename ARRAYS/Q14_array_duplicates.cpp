#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> duplicates(vector<long long> &arr, int n) {
    unordered_map<long long, int> freq;
    vector<int> ans;
    
    for(int i = 0; i < n; i++){
        freq[arr[i]]++;
    }
    
    for(auto &it : freq){
        if(it.second > 1){
            ans.push_back(it.first);
        }
    }
    
    if(ans.empty()){
        ans.push_back(-1);
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    vector<long long> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    vector<int> result = duplicates(arr, n);
    for(int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }
    return 0;
}
