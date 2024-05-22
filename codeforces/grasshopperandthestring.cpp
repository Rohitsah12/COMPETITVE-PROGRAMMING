#include <bits/stdc++.h>
typedef long long int ll;
#define endl "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()
const int inf = 1e9 + 10;
const int M = 1e9 + 7;
using namespace std;

void solve() {
    string s;
    cin >> s;
    int n = s.size();
    for (int i = 0; i < n; i++) {
        if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'Y') {
            s[i] = '.';
        }
    }
    int cnt = 1;
    int max_cnt = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '.') {
            max_cnt = max(max_cnt, cnt);
            cnt = 1; 
        } else {
            cnt++;
        }
    }
    // Final update for the last segment
    max_cnt = max(max_cnt, cnt);
    
    cout << max_cnt << endl;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // int t; cin >> t; while (t--) {
        solve();
    // }
}
