#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;

#define int long long
#define endl '\n'

const int MOD=1e9+7;
const int INF=LLONG_MAX>>1;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds; // find_by_order, order_of_key
void solve(){
    int n,q; cin>>n>>q;
    
    vector<int>v(n+1);
    vector<int>p(n+1);
    for(int i=1;i<=n;i++){
        cin>>v[i];
        p[i]=v[i]+p[i-1];
    }
    while(q--){
        int l,r; cin>>l>>r;
        cout<<p[r]-p[l-1]<<endl;
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