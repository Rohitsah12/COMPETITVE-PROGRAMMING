#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD = 1e9+7;
const int INF = LLONG_MAX >> 1;


void solve() {
    int x, y, k;
    cin >> x >> y >> k;
     int a = (x + k - 1) / k;
    int b = (y + k - 1) / k;

    int ans = a+b+abs(a-b);

    if (a > b) {
        ans--;
    }

    cout<<ans<<endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
