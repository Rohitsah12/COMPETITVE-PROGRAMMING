#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD = 1e9+7;
const int INF = LLONG_MAX >> 1;

void solve() {
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
        p[i]--; 
    }

    string s;
    cin >> s;
    vector<int> r(n, -1);

    for (int i = 0; i < n; i++) {
        if (r[i] == -1) {
            int z0 = 0, c = i;
            vector<int> t;

            while (r[c] == -1) {
                t.push_back(c);
                r[c] = 0;
                if (s[c] == '0') z0++;
                c = p[c];
            }

            if (r[c] > 0) z0 += r[c];
            for (int j : t) r[j] = z0;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << r[i] << " ";
    }
    cout << endl;
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
