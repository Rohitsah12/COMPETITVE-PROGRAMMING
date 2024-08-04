#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD=1e9+7;
const int INF=LLONG_MAX>>1;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    unordered_map<char, int> M;
    int sum=0;

    for(auto c:s){
        if (M.find(c) == M.end()) 
        {
            M.insert(make_pair(c, 1));
        }
        else
        {
            M[c]++;
        }
    }
    for(auto it:M){
        if(it.first!='?'){
        if(it.second>n){
            sum+=n;
        }
        else{
            sum+=it.second;
        }
    }
    }
    cout<<sum<<endl;
    }

signed main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    // int t=1;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}