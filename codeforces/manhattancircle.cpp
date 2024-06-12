#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    
    vector<int> x, y;
    
    for (int i = 0; i < n; ++i) {
        string row;
        cin >> row;
        for (int j = 0; j < m; ++j) {
            if (row[j] == '#') {
                x.push_back(i + 1);
                y.push_back(j + 1);
            }
        }
    }
    
    int midx, midy;
    size_t size = x.size();
    
    sort(x.begin(), x.end());
    sort(y.begin(), y.end());
    
    if (size % 2 == 0) {
        midx = (x[size / 2 - 1] + x[size / 2]) / 2;
        midy = (y[size / 2 - 1] + y[size / 2]) / 2;
    } else {
        midx = x[size / 2];
        midy = y[size / 2];
    }
    
    cout << midx << " " << midy << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
