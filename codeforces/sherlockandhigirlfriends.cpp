#include <bits/stdc++.h>
typedef long long int ll;
#define endl "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()
const int inf = 1e9 + 10;
const int M = 1e9 + 7;
using namespace std;
bool is_prime[1000000];
void sieve(ll n){
    is_prime[0]=is_prime[1]=false;
    for(ll i=2;i<=n;i++){
        is_prime[i]=true;
    }
    for(ll i=2;i<=n;i++){
        if(is_prime[i]){
            for(ll j=2*i;j<=n;j+=i){
                is_prime[j]=false;
            }
        }
    }
}

void solve() {
    ll a;
    cin>>a;
    if(a==1) cout<<1<<"\n"<<1;
    else if(a==2) cout<<1<<"\n"<<1<<" "<<1;
    else{
    cout<<2<<endl;
    for(int i=0;i<a;i++){
        if(is_prime[i+2]) cout<<is_prime[i+2]<<" ";
        else cout<<2<<" ";
    }
}
    
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
    ll max=1e6;
    sieve(max);
    int t=1;

     //cin >> t; 
    while (t--) {
        solve();
    }
}
