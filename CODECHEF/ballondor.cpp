#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    int count=0;
	    for(int i=0;i<n;i++){
	        if(arr[i]==2){
	            count++;
	        }
	    }
	    if(count%8==0) cout<<"YES\n";
	    else cout<<"NO\n";
	}

}
