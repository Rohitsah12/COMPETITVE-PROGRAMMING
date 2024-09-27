#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;

#define int long long
#define endl '\n'

const int MOD=1e9+7;
const int INF=LLONG_MAX>>1;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds; // find_by_order, order_of_key

void solve(){
    string s; 
    cin >> s;
    map<char, int> mp;
    
    for (int i = 0; i < s.length(); i++) {
        mp[s[i]]++;
    }
    
    for (int i = 0; i < s.length(); i++) {
        char req = (s[i] == '0') ? '1' : '0';  
        if (mp[req] == 0) { 
            cout << s.length() - i << endl;
            return;
        }
        mp[req]--;
    }
    cout << 0 << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
