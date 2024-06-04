#include <bits/stdc++.h>
typedef long long int ll;
#define endl "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()
const int inf = 1e9 + 10;
const int M = 1e9 + 7;
using namespace std;
int n, f, k;

void solve() {
    cin >> n >> f >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int to_check = v[f - 1]; 
    sort(v.begin(), v.end(), greater<int>());

    int count = 0;
    for(int i=0;i<k;i++){
        if(v[i]==to_check) count++;
    }
    int total_cnt =0;
    for(int i=0;i<n;i++){
        if(v[i]==to_check) total_cnt++;
    }

    if (count > 0) {
        if (count< total_cnt) {
            cout << "MAYBE" << endl;
        } else {
            cout << "YES" << endl;
        }
    } else {
        cout << "NO" << endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
