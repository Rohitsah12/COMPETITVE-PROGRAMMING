#include<bits/stdc++.h>
typedef long long int ll;
#define endl "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()
const int inf = 1e9 + 10;
const int M = 1e9 + 7;
using namespace std;
void solve(){
    long long n;
    cin>>n;
    cout<<n<<" ";
    while(n!=1){
        if(n&1){
            n=n*3+1;
        }
        else n/=2;
        cout<<n<<" ";
    }
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    // int t; cin>>t; while(t--){
        solve();
    // }
}