#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
void solve()
{
    int xc, yc, k;
    cin >> xc >> yc >> k;
    int i=0;
    while (i < k/2) {
        cout << xc << ' ' << yc - i - 1 << '\n';
        cout << xc << ' ' << yc + i + 1 << '\n';
        ++i; 
    }
    if (k % 2 != 0)
    {
        cout << xc << ' ' << yc << '\n';
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // int t=1;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}