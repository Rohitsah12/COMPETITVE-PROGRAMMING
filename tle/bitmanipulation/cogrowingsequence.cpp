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
    int n; 
    cin >> n; 
    vector<int> v(n);
    
    for(auto &it : v){
        cin >> it;
    }

    bool growing = true;
    
    // Check if the vector is growing based on bitwise AND condition
    for(int i = 1; i < n; i++){
        if((v[i] & v[i-1]) != v[i-1]){ // fixed precedence issue
            growing = false;
            break;
        }
    }

    if(growing){
        for(int i = 0; i < n; i++){
            cout << 0 << " ";
        }
        cout << endl;
    }
    else{
        cout << 0 << " ";
        for(int i = 1; i < n; i++){
            int ans = v[i-1] ^ v[i];
            ans &= v[i-1];
            v[i] ^= ans;
            cout << ans << " ";
        }
        cout << endl;
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
