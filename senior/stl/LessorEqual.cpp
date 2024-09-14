#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD=1e9+7;
const int INF=LLONG_MAX>>1;
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int ans=0;
    if(k==0) ans=v[0]-1;
    else ans=v[k-1];
    int cnt=0;
    for(int i=0;i<n;i++){
        if(v[i]<=ans) cnt++;
    }
    if(cnt!=k||ans<1||ans>(int)1e9){
        cout<<-1<<endl;
    }
    else cout<<ans<<endl;
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