#include<bits/stdc++.h>
typedef long long int ll;
#define endl "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()
const int inf = 1e9 + 10;
const int M = 1e9 + 7;
using namespace std;
void solve(){
    ll n;
    cin>>n;
    ll firstnine=45;
    ll fullcycles=n/9;
    ll remainder =n%9;
    ll result=fullcycles*firstnine+(remainder*(remainder+1))/2;
    cout<<result<<endl;
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t; cin>>t; while(t--){
        solve();
    }
}