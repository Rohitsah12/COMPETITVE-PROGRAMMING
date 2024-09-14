#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD=1e9+7;
const int INF=LLONG_MAX>>1;

void solve() {
    int n;
    cin >> n;
    vector<pair<int,int>> v(n); 
    for(int i = 0; i < n; i++) {
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end());
    int s = v[0].first;
    int e = v[0].second;
    for(int i = 1; i < n; i++) {
        if(e >= v[i].first) {
            e = max(e, v[i].second);
        } else {
            cout << s << " " << e << endl;
            s = v[i].first;
            e = v[i].second;
        }
    }
    cout << s << " " << e << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // int t;
    // cin >> t;
    while(t--) {
        solve();
    }
}
