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
    map<int,int>mp;
    for(auto &it:v){
        cin>>it;
        mp[it]++;
    }
    int ans=-1;
    for(int i=1;i<=1023;i++){
        map<int,int>temp;
        for(int j=0;j<n;j++){
            temp[v[j]^i]++;
        }
        if(temp==mp){
            ans=i; break;
        }
    }
cout<<ans<<endl;
    
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