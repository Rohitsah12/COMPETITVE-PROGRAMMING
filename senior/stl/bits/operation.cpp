#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void solve() {
    int q, n;
    cin >> q >> n;
    
    while (q--) {
        int op, x;
        cin >> op;
        if (op == 1) {
            cin >> x;
            n = n | x;
        } else if (op == 2) {
            cin >> x;
            n = n & x;
        } else if (op == 3) {
            cin >> x;
            n = n ^ x;
        } else if (op == 4) {
            n = ~n;
        }
        cout << n << endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}
