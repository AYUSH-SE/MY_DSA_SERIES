#include<bits/stdtr1c++.h>
using namespace std;

int findLongestConseqSubseq(int arr[], int N)
{
        int longest=0;
        set<int>st;
        for(int i=0;i<N;i++){
            st.insert(arr[i]);
        }
        for(int i=0;i<N;i++){
            if(st.find(arr[i]-1)==st.end()){
                int current=arr[i];
                int currentstreak=1;
                
                while(st.find(current+1)!=st.end()){
                    current+=1;
                    currentstreak+=1;
                }
                longest=max(longest,currentstreak);
            }
        }
        return longest;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<findLongestConseqSubseq(arr,n);
    return 0;
}