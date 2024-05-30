#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int sum=0;
		for(int i=1;i*i<n;i++){
			if(n%i==0){
				if(n/i!=i){
					sum+=i;
					sum+=n/i;
				}
				else sum+=i;
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}