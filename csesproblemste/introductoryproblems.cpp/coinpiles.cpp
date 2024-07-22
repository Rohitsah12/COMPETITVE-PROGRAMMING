#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD=1e9+7;
const int INF=LLONG_MAX>>1;
void solve(){
    int A,B;
    cin>>A>>B;
    if ((2 * A - B) % 3 || (2 * A - B) < 0
        || (2 * B - A) % 3 || (2 * B - A) < 0)
        cout<<"NO\n";
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