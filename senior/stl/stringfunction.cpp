#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD = 1e9+7;
const int INF = LLONG_MAX >> 1;

void solve() {
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    for (int i = 0; i < q; i++) {
        string a;
        cin >> a;
        if (a == "pop_back") {
            if (!s.empty()) s.pop_back();
        } 
        else if (a == "front") {
            if (!s.empty()) cout << s.front() << endl;
        } 
        else if (a == "back") {
            if (!s.empty()) cout << s.back() << endl;
        } 
        else if (a == "sort") {
            int l, r;
            cin >> l >> r;
            l--; r--;  // Convert to 0-based index
            if (l >= 0 && r < n && l <= r) {
                sort(s.begin() + l, s.begin() + r + 1);
            }
        } 
        else if (a == "reverse") {
            int l, r;
            cin >> l >> r;
            l--; r--;  // Convert to 0-based index
            if (l >= 0 && r < n && l <= r) {
                reverse(s.begin() + l, s.begin() + r + 1);
            }
        } 
        else if (a == "print") {
            int pos;
            cin >> pos;
            pos--;  // Convert to 0-based index
            if (pos >= 0 && pos < n) {
                cout << s[pos] << endl;
            }
        } 
        else if (a == "substr") {
            int l, r;
            cin >> l >> r;
            l--;  // Convert to 0-based index
            if (l >= 0 && r <= n && l < r) {
                cout << s.substr(l, r - l) << endl;
            }
        } 
        else {
            char x;
            cin >> x;
            s.push_back(x);
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
