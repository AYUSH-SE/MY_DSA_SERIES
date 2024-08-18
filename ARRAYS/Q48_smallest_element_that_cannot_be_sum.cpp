#include<bits/stdtr1c++.h>
using namespace std;
long long smallestpositive(vector<long long> array, int n)
{ 
    sort(array.begin(), array.end());
    
    long long smallest = 1; // Initialize the smallest positive integer
    
    for (int i = 0; i < n && array[i] <= smallest; i++) {
        smallest += array[i];
    }
    
    return smallest; 
} 

int main(){
    int n;
    cin>>n;
    vector<long long> array(n);
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    cout<<smallestpositive(array,n);
    return 0;
}