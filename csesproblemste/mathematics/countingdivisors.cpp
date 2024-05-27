#include<bits/stdc++.h>
typedef long long int ll;
#define endl "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()
const int inf = 1e9 + 10;
const int M = 1e9 + 7;
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int> ans;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            if(n/i!=i){
                ans.pb(i);
                ans.pb(n/i);
            }
            else{
                ans.pb(i);
            }
        }
    }
    cout<<ans.size()<<endl;
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t; cin>>t; while(t--){
        solve();
    }
}