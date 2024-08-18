#include<bits/stdtr1c++.h>
using namespace std;

int shortestDistance(vector<string> &s, string word1, string word2)
{   
	    int ans=INT_MAX;
	    int index1=-1,index2=-1;
		for(int i=0;i<s.size();i++){
		    if(s[i]==word1){
		        index1=i;
		    }
		    if(s[i]==word2){
		        index2=i;
		    }
		    if(index1!=-1 && index2!=-1){
		       ans=min(ans,abs(index1-index2)); 
		    }
		}
	return ans;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    vector<string> s(n);
    cout << "Enter the elements of the vector: ";
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    
    string word1, word2;
    cout << "Enter the first word: ";
    cin >> word1;
    cout << "Enter the second word: ";
    cin >> word2;
    
    int result = shortestDistance(s, word1, word2);
    cout << "The shortest distance between \"" << word1 << "\" and \"" << word2 << "\" is: " << result << endl;
    
    return 0;
}