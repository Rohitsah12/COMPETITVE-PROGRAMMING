#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD=1e9+7;
const int INF=LLONG_MAX>>1;

int csw(int a, int b, int c, int d) {
    int sw = 0;
    int ac[2] = {a, b};
    int bc[2] = {c, d};
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            int sr = 0, lr = 0;
            if (ac[i] > bc[j]) sr++;
            else if (ac[i] < bc[j]) lr++;
            if (ac[1 - i] > bc[1 - j]) sr++;
            else if (ac[1 - i] < bc[1 - j]) lr++;
            if (sr > lr) sw++;
        }
    }
    return sw;
}

void solve() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << csw(a, b, c, d) << endl;
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
