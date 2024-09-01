#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD=1e9+7;
const int INF=LLONG_MAX>>1;
void solve(){
    int n,q;
    cin>>n>>q;
    
    for(int i=0;i<q;i++){
        string s;
        cin>>s;
        if(s=="prev_permutation"){
            int a;
            cin>>a;
            cout<<s.prev_permutation(a);
        }
        else{
            int x; cin>>x;
            cout<<s.next_permutation(x);
        }
    }
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