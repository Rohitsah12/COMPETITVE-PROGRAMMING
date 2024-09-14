#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
    int a, b;
    cin >> a >> b;
    int c = b + a - 1;
    int sum1 = (b * (b - 1)) / 2;
    int sum2 = (c * (c + 1)) / 2;
    int sum = sum2 - sum1;
    int mn = INF;
    int s = 0;
    while (true) {
        s += c;
        sum -= c;
        c--;
        int ans = abs(sum - s);
        mn = min(mn, ans);
        if (ans > mn)
            break;
    }
    cout << mn << endl;
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
