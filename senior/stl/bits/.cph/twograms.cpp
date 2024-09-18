#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD = 1e9+7;
const int INF = LLONG_MAX>>1;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<string, int> mp;

    for(int i = 0; i < n - 1; i++){  
        string a = s.substr(i, 2);   
        mp[a]++;
    }

    int maxi = -1;   
    string b;

    for(auto it : mp){
        if(maxi < it.second){
            maxi = it.second;
            b = it.first;  
        }
    }

    cout << b << endl;  
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
}
