#include<bits/stdtr1c++.h>
using namespace std;

int findPlatform(int arr[], int dep[], int n)
{
    	int trains=0;
    	int platforms=0;
    	int i=0,j=0;
    	sort(arr,arr+n);
    	sort(dep,dep+n);
    	while(i<n && j<n){
    	    if(arr[i]<=dep[j]){
    	        trains++;
    	        i++;
    	    }
    	    else{
    	        trains--;
    	        j++;
    	    }
    	    platforms=max(platforms,trains);
    	}
    	return platforms;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    int dept[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cin>>dept[i];
    }
    cout<<findPlatform(arr,dept,n);
    return 0;

}