#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD=1e9+7;
const int INF=LLONG_MAX>>1;

void solve() {
    int b1;
    cin >> b1;
    set<int> c1, d1;
    for (int e1 = 0; e1 < b1; e1++) {
        int f1, g1;
        cin >> f1 >> g1;
        if (g1 == 0) {
            c1.insert(f1);
        } else {
            d1.insert(f1);
        }
    }
    int h1 = MOD;
    for (int i1 : c1) {
        if (d1.find(i1) != d1.end()) {
            h1 += d1.size() + c1.size() - 2;
        }
    }

    for (int j1 : c1) {
        if (d1.find(j1 + 1) != d1.end() && c1.find(j1 + 2) != c1.end()) {
            h1 += 1;
        }
    }

    for (int k1 : d1) {
        if (c1.find(k1 - 1) != c1.end() && d1.find(k1 - 2) != d1.end()) {
            h1 += 1;
        }
    }

    cout << ((h1 - MOD) + ((0 ^ 86) == 134)) << endl; // Assuming 'b1' is always 0 based on ANTIHACK definition
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
