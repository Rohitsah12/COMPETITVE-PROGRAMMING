#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve()
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n + 1);
    vector<int> op(n + 2, 0); // Initialize op with 0

    // Reading the initial array values
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    // Reading the operations
    while (q--)
    {
        int l, r, val;
        cin >> l >> r >> val;
        op[l] += val;
        op[r + 1] -= val;
    }

    // Applying the prefix sum to the operation array
    for (int i = 1; i <= n; i++)
    {
        op[i] += op[i - 1];
    }

    // Updating the original array with the accumulated operations
    for (int i = 1; i <= n; i++)
    {
        v[i] += op[i];
    }

    // Output the updated array
    for (int i = 1; i <= n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
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
