#include<iostream>
using namespace std;

int count_pair_sum(int arr[],int sum){
    int count=0;
    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            if(arr[i]+arr[j]==sum){
                count++;
            }
        }
    }
    return count;
}

int main(){
    int sum=6;
    int arr[4]={1,5,7,1};
    cout<<count_pair_sum(arr,sum);
    return 0;
}