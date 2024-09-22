#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD=1e9+7;
const int INF=LLONG_MAX>>1;
bool isPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0) return false;
    }
    return true;
}
void solve(){
    int n;
    cin>>n;
    while(!isPrime(n)) n++;
    cout<<n;
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