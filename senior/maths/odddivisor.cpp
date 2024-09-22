#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD=1e9+7;
const int INF=LLONG_MAX>>1;
void solve(){
    int n;
    cin>>n;
    while(n!=1 && n%2==0){
        n/=2;
    }
    if(n==1){
        cout<<"NO\n";
    }
    else cout<<"YES\n";
}
signed main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    // int t=1;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}