#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD = 1e9 + 7;

int binpow(int a, int b) {
    int result = 1;
    a = a % MOD;
    while (b > 0) {
        if (b % 2 == 1) {
            result = (result * a) % MOD;
        }
        a = (a * a) % MOD;
        b /= 2;
    }
    return result;
}

void solve() {
    int n;
    cin >> n;
    cout << binpow(2, n) << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    // int t;
    // cin >> t;
    while (t--) {
        solve();
    }
}
