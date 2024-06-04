#include <bits/stdc++.h>
typedef long long int ll;
#define endl "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()
const int inf = 1e9 + 10;
const int M = 1e9 + 7;
using namespace std;

void solve(int n, int m, string a) {
    vector<int> freq(7, 0);

    for (char ch : a) {
        freq[ch - 'A']++;
    }

    int cnt = 0;
    for (int j = 0; j < 7; ++j) {
        if (freq[j] < m) {
           cnt += (m - freq[j]);
        }
    }

    cout << cnt << endl;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, m;
        cin >> n >> m;
        string a;
        cin >> a;
        solve(n, m, a);
    }

    return 0;
}
