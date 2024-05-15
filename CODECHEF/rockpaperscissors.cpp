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
    string s;
    cin>>s;
    int ans=0;
    for(int i=0;i<n;i++){
        if(s[i]==s[i+1]){
            ans+=2;
            i++;
        }
    }
    cout<<n-ans/2<<endl;
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t; cin>>t; while(t--){
        solve();
    }
}