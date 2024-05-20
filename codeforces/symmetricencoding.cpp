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
    string s;
    cin>>n;
    cin>>s;
    string r=s;
    sort(r.begin(),r.end());
    r.erase(unique(r.begin(),r.end()),r.end());
    for(char &c:s){
        int p=lower_bound(r.begin(),r.end(),c)-r.begin();
        p=r.length()-p-1;
        cout<<r[p];
    }
    cout<<endl;

}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t; cin>>t; while(t--){
        solve();
    }
}