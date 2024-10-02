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
    int mini=INT_MAX;
    int smini=INT_MAX;
    int sum=0;
    while(n--){
        int m; cin>>m;
        vector<int>v(m);
        for(int i=0;i<m;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        mini=min(mini,v[0]);
        smini=min(smini,v[1]);
        sum+=v[1];
    }
    cout<<mini+sum-smini<<endl;
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