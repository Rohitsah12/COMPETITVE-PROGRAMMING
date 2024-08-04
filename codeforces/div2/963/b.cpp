#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD=1e9+7;
const int INF=LLONG_MAX>>1;
void solve(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int oddcnt=0;
    int evencnt=0;
    for(int i=0;i<n;i++){
        if(v[i]%2==0){
            evencnt++;
        }
        else oddcnt++;
    }
    cout<<min(oddcnt,evencnt)<<endl;
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