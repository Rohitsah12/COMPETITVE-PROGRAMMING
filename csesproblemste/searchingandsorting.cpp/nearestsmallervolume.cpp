#include<bits/stdc++.h>
typedef long long int ll;
#define endl "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()
const int inf = 1e9 + 10;
const int M = 1e9 + 7;
using namespace std;
void solve(){
    int n; cin>>n;
    stack<pair<int,int>>st;
    vector<int>values(n);
    for(int i=0;i<n;i++){
        cin>>values[i];
    }
    for(int i=0;i<n;i++){
        while(st.size()>0 && st.top().first>=values[i]){
            st.pop();
        }
        if(st.size()>0){
            cout<<st.top().second<<" ";
        }
        else cout<<0<<" ";
        st.push({values[i],i+1});
    }
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    // int t; cin>>t; while(t--){
        solve();
    // }
}