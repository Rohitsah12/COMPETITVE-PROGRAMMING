#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD = 1e9+7;
const int INF = LLONG_MAX >> 1;

void solve() {
    int n, m,q,x1,y1,x2,y2;
    cin >> n >> m>>q;

    vector<vector<int>> v(n+1, vector<int>(m+1));
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> v[i][j];
        }
    }
   
    vector<vector<int>> pref(n+1, vector<int>(m+1, 0));

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            pref[i][j] = v[i][j] + pref[i-1][j] + pref[i][j-1] - pref[i-1][j-1];
        }
    }

    
    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= m; j++) {
    //         cout << pref[i][j] << " ";
    //     }
    //     cout << endl;
    // }
     while(q--){
        cin>>x1>>y1>>x2>>y2;
    cout<<pref[x2][y2]-pref[x2][y1-1]-pref[x1-1][y2]+pref[x1-1][y1-1]<<endl;
    }
    
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    while (t--) {
        solve();
    }

    return 0;
}
