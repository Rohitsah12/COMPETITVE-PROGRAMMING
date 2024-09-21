#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD=1e9+7;
const int INF=LLONG_MAX>>1;
void solve(){
    int n,a,b; cin>>n>>a>>b;
    if(n%(a+b)==0){
        int rn=n/(a+b);
        cout<<a*rn;
    }
    else{
        int rn=n/(a+b);
        int lt=n%(a+b);
        cout<<a*rn+min(a,lt);
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