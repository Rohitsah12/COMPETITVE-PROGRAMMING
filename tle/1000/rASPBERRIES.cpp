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
    int n,k; cin>>n>>k;
    vector<int>v(n);
    for(auto &it:v){
        cin>>it;
    } 
    int d=0;
    int ecnt=0;
    for(int i=0;i<n;i++){
        if(!(v[i]&1)){
            ecnt++;
        }
        if(v[i]%k==0){
            d=0;
        }
        else{
            d=min(d,k-v[i]%k);
        }
    }
    if(k!=4){
        cout<<d<<endl;
    }
    else{
        if(ecnt>=2){
            cout<<0<<endl;
        }
        else if(ecnt==1){
            cout<< min(1LL,d)<<endl;
        }
        else{
            cout<<min(d,2LL)<<endl;
        }
    }


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