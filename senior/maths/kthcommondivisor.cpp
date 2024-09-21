#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD=1e9+7;
const int INF=LLONG_MAX>>1;
void solve(){
    int a,b,k;
    cin>>a>>b>>k;
    int hcf=__gcd(a,b);
    vector<int>v;
    for(int i=1;i*i<=hcf;i++){
        if(hcf%i==0){
            v.push_back(i);
            if(i!=(hcf/i)){
                v.push_back(hcf/i);
            }
        }
    }
    sort(v.begin(),v.end());
    int sz=v.size();
    if(sz>=k){
        cout<<v[sz-k];
    }
    else cout<<-1;
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