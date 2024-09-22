#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    int cnt0 = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i)
    {
        if (a[i] >= k)
        {
            cnt += a[i];
        }
        else if (a[i] == 0 && cnt > 0)
        {
            cnt--;
            cnt0++;
        }
    }
    cout<<cnt0<<endl;
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