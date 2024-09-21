#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD=1e9+7;
const int INF=LLONG_MAX>>1;
int s(int a){
    int s=0;
    while(a){
        int lt=a%10;
        a/=10;
        s+=lt;
    }
return s;
}
void solve(){
    int a,b;
    cin>>a>>b;
    cout<<max(s(a),s(b));
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