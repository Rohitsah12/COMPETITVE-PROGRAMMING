#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD=1e9+7;
const int INF=LLONG_MAX>>1;

int calculateWays(int K) {
    
    long totalWays = ((long) K * K * (K * K - 1)) / 2;
    long attackingWays = 4 * (K - 1) * (K - 2);
    long ans = totalWays - attackingWays;
    return ans;
}
void solve(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cout << calculateWays(i) <<endl;
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