#include<iostream>
using namespace std;
 
int missing_number(int arr[],int n){
    int sum=0;
    for(int i=0;i<n-1;i++){
        sum+=arr[i];    
    }
    int expected_sum= (n*(n+1)/2);

    int result=expected_sum-sum;
    return result;
  
}

int main(){
    int arr[4]={1,2,3,5};
    int n=5;
    cout<<missing_number(arr,n);
    return 0;
}