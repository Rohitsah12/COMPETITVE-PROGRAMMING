#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD=1e9+7;
const int INF=LLONG_MAX>>1;
void solve(){
    int n; cin>>n;
    vector<int>v(n);
    for(auto &x:v){
        cin>>x;
    }
    if(n<=2){
        cout<<-1<<endl;
        return;
    }
    sort(v.begin(),v.end());
    int sum=accumulate(v.begin(),v.end(),0LL);
    int req=v[n/2]*2*n+1;
    cout<<max(0LL,req-sum)<<endl;
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