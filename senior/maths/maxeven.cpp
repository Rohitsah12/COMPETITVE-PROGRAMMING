#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD = 1e9+7;
const int INF = LLONG_MAX >> 1;

void solve() {
    int n; 
    cin >> n;
    vector<int> v(n);
    vector<int> o, e;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] % 2 == 0) 
            e.push_back(v[i]);
        else 
            o.push_back(v[i]);
    }

    if (o.size() < 2 && e.size() < 2) {
        cout << -1 << endl;
        return;
    }

    int maxOddSum = 0, maxEvenSum = 0;

    if (o.size() >= 2) {
        sort(o.begin(), o.end());
        maxOddSum = o[o.size()-1] + o[o.size()-2];
    }

    if (e.size() >= 2) {
        sort(e.begin(), e.end());
        maxEvenSum = e[e.size()-1] + e[e.size()-2];
    }

    cout << max(maxOddSum, maxEvenSum) << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
}
