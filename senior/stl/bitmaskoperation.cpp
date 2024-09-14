#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD=1e9+7;
const int INF=LLONG_MAX>>1;
void solve(){
    int q,n;
    cin>>q>>n;
    while(q--){
        int no,x; cin>>no>>x;
        if(no==1){
            cout<<((n>>x)&1)<<endl;
        }
        else if(no==2){
            n|=(1<<x);
            cout<<n<<endl;
        }
        else if(no==3){
            n&=~(1<<x);
            cout<<n<<endl;

        }
        else{
            n^=(1<<x);
            cout<<n<<endl;

        }
    }
}
signed main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int t=1;
    // int t;
    // cin>>t;
    while(t--){
        solve();
    }
}