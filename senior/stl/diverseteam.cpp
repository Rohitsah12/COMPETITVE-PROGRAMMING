#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD=1e9+7;
const int INF=LLONG_MAX>>1;
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int>v(n+1);
    map<int,int>mp;
    for(int i=1;i<=n;i++){
        cin>>v[i];
        mp[v[i]]=i;
    }
    if(mp.size()<k){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"Yes\n";
    for(auto x:mp){
        
        if(k>0){
            cout<<x.second<<" ";
            k--;
        }
    }
    cout<<endl;
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