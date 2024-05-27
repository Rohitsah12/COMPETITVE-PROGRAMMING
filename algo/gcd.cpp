#include<bits/stdc++.h>
typedef long long int ll;
#define endl "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()
const int inf = 1e9 + 10;
const int M = 1e9 + 7;
using namespace std;
int gcd(int a,int b){
    if(a==0) return b;
    if(b==0) return a;
    if(a==b) return a;
    if(a>b){
        return gcd(a-b,b);
    }
    return gcd(a,b-a);
}
void solve(){

}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t; cin>>t; while(t--){
        solve();
    }
}