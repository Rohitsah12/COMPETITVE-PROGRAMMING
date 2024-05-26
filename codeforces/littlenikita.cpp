#include <bits/stdc++.h>
typedef long long int ll;
#define endl "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()
const int inf = 1e9 + 10;
const int M = 1e9 + 7;
using namespace std;
void solve() {
    int n,m;
    cin>>n>>m;
    if(n<m) cout<<"NO\n";
    else{
        if((n-m)%2==0) cout<<"YES\n";
        else cout<<"NO\n";
    }
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t; cin>>t; while(t--){
    solve();
    }
    
    return 0;
}
