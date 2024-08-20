#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD=1e9+7;
const int INF=LLONG_MAX>>1;
void solve(){
    int n,s,m;
    cin>>n>>s>>m;
    vector<pair<int,int>>vp(n);
     for (int i = 0; i < n; i++) {
        int first, second;
        cin >> first >> second; 
        vp[i] = make_pair(first, second); 
    }
    int f1=vp[0].first;
    int f2=vp[n-1].second;
    int maxi=max(f1,f2);
    for(int i=1;i<n;i++){
        int calc=vp[i].first-vp[i-1].second;
        maxi=max(maxi,calc);
    }
    if(maxi>=s){
        cout<<"YES\n";
    }
    else cout<<"NO\n";
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