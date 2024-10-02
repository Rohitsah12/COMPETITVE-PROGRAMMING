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
    int n,q;
    cin>>n>>q;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    map<int,int>mp;
    for(int i=0;i<n;i++){
        int temp=(i+1)*(n-i)-1;
        mp[temp]++;
        if(i>0){
            int temp2=i*(n-i);
            mp[temp2]+=(v[i]-v[i-1]-1);
        }
    }
    while(q--){
        int k; cin>>k;
        if(mp.find(k)==mp.end()){
            cout<<0<<" ";
        }
        else cout<<mp[k]<<" ";
    }
cout<<endl;    
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