#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD=1e9+7;
const int INF=LLONG_MAX>>1;
bool cmp(pair<string,int>&p1,pair<string,int>&p2){
    if(p1.second>p2.second){
        return true;
    }
    else if(p1.second==p2.second){
        if(p1.first<p2.first){
            return true;
        }
        else return false;
    }
    else return false;
}
void solve(){
    int n;
    cin>>n;
    vector<pair<string,int>>v1;
    map<string,vector<int>>mp;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int total=a+b+c+d;
        v1.push_back({s,total});
        vector<int>v;
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        v.push_back(d);
        mp[s]=v;
    }
    sort(v1.begin(),v1.end(),cmp);
    for(auto y:v1){
        cout<<y.first<<" "<<y.second<<" ";
        for(auto x:mp[y.first]){
            cout<<x<<" ";
        }
        cout<<endl;
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