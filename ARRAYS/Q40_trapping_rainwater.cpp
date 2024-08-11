#include<bits/stdtr1c++.h>
using namespace std;

long long trappingWater(int arr[], int n) {
    long long max_area = 0;
    int left = 0;
    int right = n - 1;
    long long leftMax = 0, rightMax = 0;

    while (left <= right) {
        if (arr[left] < arr[right]) {
            if (arr[left] >= leftMax) {
                leftMax = arr[left];
            } else {
                max_area += leftMax - arr[left];
            }
            left++;
        } else {
            if (arr[right] >= rightMax) {
                rightMax = arr[right];
            } else {
                max_area += rightMax - arr[right];
            }
            right--;
        }
    }
    return max_area;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<trappingWater(arr,n);
    return 0;
}