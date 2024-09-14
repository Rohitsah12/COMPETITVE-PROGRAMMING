#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD = 1e9+7;
const int INF = LLONG_MAX >> 1;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    int side = sqrt(n);
    if (side * side != n) {
        cout << "No" << endl;
        return;
    }

    bool isValid = true;
    for (int i = 0; i < side; ++i) {
        if (s[i * side] != '1' || s[i * side + side - 1] != '1') {
            isValid = false;
            break;
        }
    }

    if (isValid) {
        for (int i = 0; i < side; ++i) {
            if (s[i] != '1' || s[(side - 1) * side + i] != '1') {
                isValid = false;
                break;
            }
        }
    }

    if (isValid) {
        for (int i = 1; i < side - 1; ++i) {
            for (int j = 1; j < side - 1; ++j) {
                if (s[i * side + j] != '0') {
                    isValid = false;
                    break;
                }
            }
            if (!isValid) break;
        }
    }

    cout << (isValid ? "Yes" : "No") << endl;
   
    
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
