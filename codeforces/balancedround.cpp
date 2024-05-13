#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int best=1;
    int curr=1;
    int index=1;
    while(index<n){
        if(abs(v[index]-v[index-1])>k){
            best=max(best,curr);
            curr=1;
        }
        else{
            curr++;
        }
        index++;
    }
    best=max(best,curr);
    cout<<n-best<<endl;
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin>>t; while(t--){
        solve();
    }
}