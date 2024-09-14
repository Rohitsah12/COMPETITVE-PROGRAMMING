#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD=1e9+7;
const int INF=LLONG_MAX>>1;
void solve(){
    int q;
    cin>>q;
    stack<int>st;
    while(q--){
        string s; cin>>s;
        if(s=="push"){
            int a; cin>>a;
            st.push(a);
        }
        else if(s=="top"){
            cout<<st.top()<<endl;
        }
        else{
            st.pop();
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