#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD=1e9+7;
const int INF=LLONG_MAX>>1;
void solve(){
    int n,q; cin>>n>>q;
    vector<int>v(n);
    map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>v[i];
        mp[v[i]]++;
    }
    while(q--){
        int x; cin>>x;
        int cntg=0,cntl=0;
        for(auto it=mp.begin();it!=mp.end();it++){
            if (it->first < x) 
                cntl += it->second;
            else if (it->first > x)
                cntg += it->second;
        }
        cout<<cntl<<" "<<cntg<<endl;
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