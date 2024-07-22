#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD=1e9+7;
const int INF=LLONG_MAX>>1;
int binExpo(int a,int b){
    int ans=1;
    while(b){
        if(b%2==1){
            ans=ans*a% MOD;
        }
        a=a*a%MOD;
        b/=2;
    }
    return ans;
}

//a^-1 mod p=a^(p-2) mod p
//o(logp)
void solve(){
  cout<<binExpo(2,MOD-2);  
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