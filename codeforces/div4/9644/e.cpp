#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
    int l, r;
    cin >> l >> r;
    
    int p = log(l) / log(3); 
    p++;
    int ans = 0;
    ans += (2 * p);      
    while (r > l) {
        int k = log(r) / log(3);  
        int q = pow(3, k);  
        int count = r - max(q, l + 1);
        ans += ((k + 1) * (count + 1));  
        r = q - 1;  
    }
    
    cout << ans << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
