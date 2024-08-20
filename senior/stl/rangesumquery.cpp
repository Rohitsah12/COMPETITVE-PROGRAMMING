#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
void solve()
{
    int n, q, l, r;
    cin >> n >> q;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    vector<int> pref(n + 1);
    pref[0] = 0;
    pref[1] = v[1];
    // cout<<v[1]<<endl;
    for (int i = 2; i <= n; i++)
    {
        pref[i] = pref[i - 1] + v[i];
    }
    // for(int i=0;i<=n;i++){
    //     cout<<pref[i];
    // }

    while (q--)
    {
        cin >> l >> r;
        cout << pref[r] - pref[l - 1] << endl;
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // int t;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}