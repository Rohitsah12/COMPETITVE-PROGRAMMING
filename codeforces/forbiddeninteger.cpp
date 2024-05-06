#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,k,x;
        cin>>n>>k>>x;
        if(k==1) cout<<"NO\n";
        else if(x!=1){
            cout<<"Yes\n";
            cout<<n<<endl;
            for(int i=0;i<n;i++){
                cout<<1<<" ";
            }
            cout<<endl;
        }
        else if(n%2 && k==2){
            cout<<"NO\n";
        }
        else if(n%2==0){
            cout<<"YES\n";
            cout<<n/2<<endl;
            for(int i=0;i<n/2;i++){
                cout<<2<<" ";
            }
            cout<<endl;
        }
        else {
            int tot=n/2;
            cout<<"Yes\n";
            cout<<tot<<endl;
            for(int i=0;i<tot-1;i++){
                cout<<2<<" ";
            }
            cout<<"3\n";
            
        }
        
        
    }

    return 0;
}
