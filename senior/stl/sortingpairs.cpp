#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD=1e9+7;
const int INF=LLONG_MAX>>1;

bool cmp(pair<string, int>& p1, pair<string, int>& p2) {
    if (p1.second > p2.second) {
        return true;
    } else if (p1.second == p2.second) {
        if (p1.first < p2.first) {
            return true;
        } else {
            return false;
        }
    } else {
        return false;
    }
}
void solve(){
    int n;
    cin>>n;
    vector<pair<string,int>>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first;
        cin>>v[i].second;
    }
    sort(v.begin(),v.end(),cmp);
    for(int i=0;i<n;i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
}
signed main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int t=1;
    // int t;?
    // cin>>t
    while(t--){
        solve();
    }
}