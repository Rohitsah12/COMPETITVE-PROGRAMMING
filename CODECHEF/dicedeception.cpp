#include <bits/stdc++.h>
using namespace std;

int main() {
	//Rohit kumar sah
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    vector<int> v;
	    for(int i=0;i<n;i++){
	        int x;
	        cin>>x;
	        v.push_back(x);
	    }
	    sort(v.begin(),v.end());
	    int count=0;
	    for(int i=0;i<v.size();i++){
	        if(v[i]==1 && count<k){
	            v[i]=6;
	            count++;
	        }
	        else if(v[i]==2 && count<k){
	            v[i]=5;
	            count++;
	        }
	        else if(v[i]==3 && count<k){
	            v[i]=4;
	            count++;
	        }
	        else break;
	    }
	    int sum=0;
	    for(int i=0;i<n;i++){
	        sum+=v[i];
	    }
	    cout<<sum<<endl;
	    
	}
	

}
