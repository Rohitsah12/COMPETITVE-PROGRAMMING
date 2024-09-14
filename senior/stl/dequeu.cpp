#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD=1e9+7;
const int INF=LLONG_MAX>>1;
void solve(){
    int n;
    cin>>n;
    deque<int>dq;
    while(n--){
        string s;
        cin>>s;
        if(s=="push_back"){
            int x; cin>>x;
            dq.push_back(x);
        }
        else if(s=="push_front"){
            int x; cin>>x;
            dq.push_front(x);
        }
        else if(s=="pop_front"){
            dq.pop_front();
        }
        else if(s=="pop_back"){
            dq.pop_back();
        }
        else if(s=="front"){
            cout<<dq.front()<<endl;
        }
        else if(s=="back"){
            cout<<dq.back()<<endl;
        }
        else{
            int x; cin>>x;
            x--;
            cout<<dq.at(x)<<endl;
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