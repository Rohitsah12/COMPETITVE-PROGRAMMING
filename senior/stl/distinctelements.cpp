#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD=1e9+7;
const int INF=LLONG_MAX>>1;
void solve(){
    int n,q;
    cin>>n>>q;
    vector<int>ans;
    set<int>st;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        st.insert(x);
    }
    for(auto s:st){
        ans.push_back(s);
    }
    while(q--){
        int x; cin>>x;
    int pos=lower_bound(ans.begin(),ans.end(),x)-ans.begin();
    cout<<pos<<" ";
    int pos1=upper_bound(ans.begin(),ans.end(),x)-ans.begin();
    cout<<st.size()-pos1<<endl;
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