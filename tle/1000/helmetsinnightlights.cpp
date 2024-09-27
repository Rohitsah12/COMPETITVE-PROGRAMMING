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
    int n,p; cin>>n>>p;
    vector<int>a(n);
    vector<int>b(n);
    for(auto &it:a) cin>>it;
    for(auto &it:b) cin>>it;
    vector<pair<int,int>>cst;
    cst.push_back({p,n+1});
    for(int i=0;i<n;i++){
        cst.push_back({b[i],a[i]});
    }
    sort(cst.begin(),cst.end());
    int t=1;
    int c=p;int idx=0;
    while(t<n){
        int left=n-t;
        if(cst[idx].second<=left){
            t+=cst[idx].second;
            c+=cst[idx].first*1LL*cst[idx].second;
        }
        else{
            t=n;
            c+=left*1LL*cst[idx].first;
        }
        idx++;
    }
    cout<<c<<endl;
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