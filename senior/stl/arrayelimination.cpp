#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD=1e9+7;
const int INF=LLONG_MAX>>1;
void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>valid(n+1,1);
    //assuming all values are valid initially
    for(int i=0;i<30;i++){
        vector<int>validf(n+1);
        //finding valid values of K for ith bit
        int cnt=0;
        for(int j=0;j<n;j++){
            if(arr[j]&(1<<i)){
                cnt++;
            }
        }
        for(int j=1;j<=n;j++){
            if(cnt%j==0){
                validf[j]==1;
            }
        }
        //taking the intersection of factors
        for(int j=1;j<=n;j++){
            valid[j]=valid[j] & validf[j];
        }
    }
    for(int i=1;i<=n;i++){
        if(valid[i]){
            cout<<i<<" ";
        }
    }
    cout<<endl;
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