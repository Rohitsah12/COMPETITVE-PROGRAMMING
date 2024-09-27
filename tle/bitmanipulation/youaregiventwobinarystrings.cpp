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
    string x; string y;
    cin>>x>>y;
    reverse(x.begin(),x.end());
    reverse(y.begin(),y.end());
    int px=0;
    int py=0;
    for(int i=0;i<y.length();i++){
        if(y[i]=='1'){
            py=i;
            break;
        }
    }
    for(int i=py;i<x.length();i++){
        if(x[i]=='1'){
            px=i;
            break;
        }
    }
    if(px>=py){
        cout<<px-py<<endl;
    }
    else cout<<0<<endl;


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