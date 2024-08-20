#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD=1e9+7;
const int INF=LLONG_MAX>>1;
void solve(){
    int n,q;
    cin>>n>>q;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    while(q--){
        string s;
        cin>>s;
        if(s=="sort"){
            int a,b;
            cin>>a>>b;
            sort(v.begin()+(a-1),v.begin()+b);
        }
        else if(s=="pop_back"){
            v.pop_back();
        }
        else if(s=="back"){
            cout<<v.back()<<endl;
        }
        else if(s=="reverse"){
            int a,b;
            cin>>a>>b;
            reverse(v.begin()+(a-1),v.begin()+b);
        }
        else if(s=="front"){
            cout<<v.front()<<endl;
        }
        else if(s=="push_back"){
            int a;
            cin>>a;
            v.push_back(a);
        }
        else{
            int a;
            cin>>a;
            cout<<v[a-1]<<endl;
        }

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