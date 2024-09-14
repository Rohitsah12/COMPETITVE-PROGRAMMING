#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD = 1e9+7;
const int INF = LLONG_MAX >> 1;

void solve() {
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    while (q--) {
        string query;
        int x;
        cin >> query >> x;

        if (query == "binary_search") {
            if (binary_search(v.begin(), v.end(), x)) {
                cout << "found" << endl;
            } else {
                cout << "not found" << endl;
            }
        } else if (query == "lower_bound") {
            auto it = lower_bound(v.begin(), v.end(), x);
            if (it != v.end()) {
                cout << *it << endl;
            } else {
                cout << -1 << endl;
            }
        } else if (query == "upper_bound") {
            auto it = upper_bound(v.begin(), v.end(), x);
            if (it != v.end()) {
                cout << *it << endl;
            } else {
                cout << -1 << endl;
            }
        }
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;  
    while (t--) {
        solve();
    }
}
