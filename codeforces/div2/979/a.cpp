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
    int n; cin>>n;
    vector<int>v(n);
    int mini=INT_MAX;
    int maxi=INT_MIN;
    for(auto &e:v){
        cin>>e;
        mini=min(mini,e);
        maxi=max(maxi,e);
    }
    cout<<(n-1)*(maxi-mini)<<endl;
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