#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void solve() {
    string s;
    cin >> s;
    int n = s.size();
    
    vector<int> v(n+1, 0);
    for (int i = 1; i < n; i++) {
        v[i] = (s[i] == s[i-1]);  
    }

    vector<int> pref(n+1, 0);
    for (int i = 1; i <= n; i++) {
        pref[i] = pref[i-1] + v[i];
    }
    
    int m;
    cin >> m;
    while (m--) {
        int l, r;
        cin >> l >> r;
        cout << pref[r-1] - pref[l-1] << endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    return 0;
}
