#include <bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    vector<int>a;
	    for(int i=0;i<n;i++){
	        int x;
	        cin>>x;
	        a.push_back(x%k);
	    }
	    sort(a.begin(),a.end());
	    int ans=a[n-1]-a[0];
	    for(int i=0;i<n;i++){
	        ans=min(ans,a[i]+k-a[i+1]);
	    }
	    cout<<ans<<endl;
	    
	}

}
