#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD=1e9+7;
const int INF=LLONG_MAX>>1;
void solve(){
    int n; cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    vector<pair<int,int>>arr;
    multiset<int>st;
    int tsum=0;
    for(int i=0;i<n;i++){
        arr.push_back({v[i],i});
        tsum+=v[i];
        st.insert(v[i]);
    }
    sort(arr.begin(),arr.end());
    vector<int>ans;
    for(int i=0;i<n;i++){
        int val=arr[i].first;
        int ind=arr[i].second;
        st.erase(st.find(val));
        int lst=*(--st.end());
        if(tsum-lst-val==lst){
            ans.push_back(ind+1);
        }
        st.insert(val);
    } 
    cout<<ans.size()<<endl;
    for(auto x:ans) cout<<x<<" ";
    cout<<endl;   
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