#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int x;
	for(int i=0;i<t;i++){
	    cin>>x;
	    if(x<100) cout<<"Easy\n";
	    else if(x>=100&&x<200) cout<<"Medium\n";
	    else cout<<"Hard\n";
	}

}
