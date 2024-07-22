#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int countTrailingZeros(int n) {
    int count = 0;
    while (n >= 5) {
        n /= 5;
        count += n;
    }
    return count;
}

void solve() {
    int n;
    cin >> n;
    cout << countTrailingZeros(n) << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // int t;
    // cin >> t;
    while (t--) {
        solve();
    }
}
