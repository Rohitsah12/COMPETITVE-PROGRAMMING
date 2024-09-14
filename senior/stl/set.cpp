#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD=1e9+7;
const int INF=LLONG_MAX>>1;
void solve(){
    int q;
    cin>>q;
        set<int>st;

    while(q--){
        string s;
        cin>>s;
        if(s=="insert"){
            int x; cin>>x;
            st.insert(x);
        }
        else if(s=="find"){
            int x; cin>>x;
            if(st.find(x)!=st.end()){
                cout<<"found\n";
            }
            else cout<<"not found\n";
        }
        else if(s=="lower_bound"){
            int x; cin>>x;
            if(st.lower_bound(x)!=st.end()){
                cout<<*st.lower_bound(x)<<endl;
            }
            else cout<<-1<<endl;
        }
        else{
            int x; cin>>x;
            if(st.upper_bound(x)!=st.end()){
                cout<<*st.upper_bound(x)<<endl;
            }
            else cout<<-1<<endl;
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