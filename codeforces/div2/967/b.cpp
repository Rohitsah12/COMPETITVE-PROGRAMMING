#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD=1e9+7;
const int INF=LLONG_MAX>>1;
void solve(){
    int n;
    cin>>n;
    if(n&1){
        vector<int>v(n);
        int a=0;
        int b=n-1;
        for(int i=0;i<n;i++){
            if((i+1)&1){
                v[a++]=i+1;
            }
            else{
                v[b--]=i+1;
            }
        }
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }   
    else{
        cout<<-1<<endl;
    } 
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