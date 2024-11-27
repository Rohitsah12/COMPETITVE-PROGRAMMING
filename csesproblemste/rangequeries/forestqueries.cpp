#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;

#define int long long
#define endl '\n'

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds; // find_by_order, order_of_key

void solve() {
    int n, q;
    cin >> n >> q;
    
    vector<vector<char>> v(n + 1, vector<char>(n + 1));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> v[i][j];
        }
    }

    vector<vector<int>> vi(n + 1, vector<int>(n + 1));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            vi[i][j] = (v[i][j] == '*') ? 1 : 0;
        }
    }

    vector<vector<int>> p(n + 1, vector<int>(n + 1));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            p[i][j] = vi[i][j] + p[i - 1][j] + p[i][j - 1] - p[i - 1][j - 1];
        }
    }
    while(q--){
        int a,b,c,d; cin>>a>>b>>c>>d;
        int ans=p[c][d]-p[c][b-1]-p[a-1][d]+p[a-1][b-1];
        cout<<ans<<endl;
    }
    
    
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
}
