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
    for(auto &it:v){
        cin>>it;
    }
    int maxi=0,cnt1=0;
    int maxa=0,cnt2=0;
    for(int i=0;i<n;i++){
        if(i&1){
            maxi=max(maxi,v[i]);
            cnt1++;
        }
        else{
            maxa=max(maxa,v[i]);
            cnt2++;
        }
    }
    cout<<max(maxi+cnt1,maxa+cnt2)<<endl;
     

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