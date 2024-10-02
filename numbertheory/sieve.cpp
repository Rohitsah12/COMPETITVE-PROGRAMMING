#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;

#define int long long
#define endl '\n'

const int MOD=1e9+7;
const int INF=LLONG_MAX>>1;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds; // find_by_order, order_of_key
int isPrime[10000001];
void sieve(){
    int maxN=1000000;
    for(int i=1;i<=maxN;i++){
        isPrime[i]=1;
    }
    isPrime[0]=isPrime[1]=0;
    for(int i=2;i*i<=maxN;i++){
        if(isPrime[i]){
            for(int j=i*i;j<=maxN;j++){
                isPrime[j]=0;
            }
        }
    }
}
void solve(){
    int n; cin>>n;
    sieve();
    cout<<isPrime[n];
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