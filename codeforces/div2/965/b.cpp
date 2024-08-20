#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> q(n);
    q[n - 1] = v[0];
    for (int i = 0; i < n - 1; i++)
    {
        q[i] = v[i + 1];
    }

    for (int i = 0; i < n; i++)
    {
        cout << q[i] << " ";
    }
    cout << endl;
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