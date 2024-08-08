#include<bits/stdtr1c++.h>
using namespace std;
int findMin(int arr[], int n) {
    int mini=arr[0];
        for(int i=0;i<n;i++){
            if(arr[i]<mini){
                mini=arr[i];
            }
        }
    return mini;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<findMin(arr,n);
    return 0;

}