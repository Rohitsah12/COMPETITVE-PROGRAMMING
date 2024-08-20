#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD=1e9+7;
const int INF=LLONG_MAX>>1;
void solve(){
    int n,q,z,x;
    cin>>n>>q;
    unordered_map<int,int>mp;
    for(int i=0;i<q;i++){
        cin>>z>>x;
        if(z==1){
            mp[x]++;
        }
        else{
            cout<<mp[x]<<endl;
        }
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