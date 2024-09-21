#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD=1e9+7;
const int INF=LLONG_MAX>>1;
void solve(){
    int sum=0;
    int k; cin>>k;
    for(int i=1;i<=k;i++){
        for(int j=1;j<=k;j++){
            for(int a=1;a<=k;a++){
                sum+=__gcd(i,__gcd(j,a));
            }
        }
    }
    cout<<sum<<endl;
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