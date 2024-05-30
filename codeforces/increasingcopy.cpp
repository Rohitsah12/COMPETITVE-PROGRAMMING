#include<bits/stdc++.h>
typedef long long int ll;
#define endl "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()
const int inf = 1e9 + 10;
const int M = 1e9 + 7;
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<ll> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<ll> b(n + 1);
    for(int i = 0; i <= n; i++) {
        cin >> b[i];
    }

    ll c = b.back();
    ll totaldiff = 0;
    bool flag = false;
    ll mindiff = LLONG_MAX;

    for(int i = 0; i < n; i++) {
        totaldiff += abs(a[i] - b[i]);

        if(c >= min(a[i], b[i]) && c <= max(a[i], b[i])) {
            flag = true;
        }

        mindiff = min(mindiff, abs(a[i] - c));
        mindiff = min(mindiff, abs(b[i] - c));
    }

    if(flag) {
        totaldiff++;
    } else {
        totaldiff += mindiff + 1;
    }

    cout << totaldiff << endl;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; 
    while(t--) {
        solve();
    }
}
