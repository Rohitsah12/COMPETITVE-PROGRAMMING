#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD = 1e9+7;
const int INF = LLONG_MAX >> 1;

int minop(vector<int>& a, int n) {
    int largeOdd = 0; 
    int largeEven = 0; 

    for (int i = 0; i < n; i++) {
        if ((a[i] & 1) == 1 && a[i] > largeOdd)
            largeOdd = a[i];
        if ((a[i] & 1) == 0 && a[i] > largeEven)
            largeEven = a[i];
    }

    int c = 0;
    bool asp = true;
    for (int i = 1; i < n; i++) {
        if ((a[i] & 1) != (a[0] & 1)) {
            asp = false;
            break;
        }
    }

    if (asp) {
        return 0;
    }

    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++) {
        if ((a[i] & 1) == 0 && a[i] < largeOdd) {
            c++;
            a[i] = a[i] + largeOdd;
            largeOdd = max(largeOdd, a[i]);
        }
    }

    asp = true;
    for (int i = 1; i < n; i++) {
        if ((a[i] & 1) != (a[0] & 1)) {
            asp = false;
            break;
        }
    }

    if (asp) {
        return c;
    }

    int indx = 0; 
    for (int i = 0; i < n; i++) {
        if ((a[i] & 1) == 1 && a[i] == largeOdd) {
            indx = i;
            break;
        }
    }

    a[indx] = largeOdd + largeEven;
    c++;

    for (int i = 0; i < n; i++) {
        if ((a[i] & 1) == 0) {
            c++;
        }
    }

    return c;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    cout << minop(a, n) << endl;
}
signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
