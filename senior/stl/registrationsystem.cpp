#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
void solve()
{
    int n;
    cin>>n;
    map<string, int> m;
    while(n--){
        string s;
        cin >> s;
        m[s]++;
        if (m[s] == 1)
            cout << "OK" << endl;
        else
            cout << s << m[s] - 1 << endl;
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    // int t;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}