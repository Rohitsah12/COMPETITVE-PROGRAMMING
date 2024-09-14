#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD = 1e9+7;
const int INF = LLONG_MAX >> 1;

void solve() {
    int n;
    cin >> n;
    vector<vector<char>> v(n, vector<char>(4));
    vector<int> ans;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 4; j++) {
            cin >> v[i][j];
        }
    }


    for(int i = n - 1; i >= 0; i--) {
        for(int j = 0; j < 4; j++) {
            if(v[i][j] == '#') {
                ans.push_back(j + 1);
                break; 
            }
        }
    }

    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
