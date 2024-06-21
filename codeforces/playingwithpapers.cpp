#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define lld long double
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define fl(i, n) for(int i = 0; i < n; i++)
#define rl(i, m, n) for(int i = n; i >= m; i--)
#define py cout << "YES\n";
#define pn cout << "NO\n";
#define pi 3.141592653589793238
#define vr(v) v.begin(), v.end()
#define rv(v) v.end(), v.begin()
#define Rohit ios_base::sync_with_stdio(false);
#define Kumar cin.tie(NULL);
#define Sah cout.tie(NULL);

using namespace std;


void solve() {
    long long a, b;
    cin >> a >> b;
    long long ans = 0;
    while (a > 0 && b > 0) {
        if (a >= b) {
            ans += a / b;
            a %= b;
        } else {
            ans += b / a;
            b %= a;
        }
    }
    cout << ans << "\n";
}

signed main() {
    Rohit Kumar Sah
    ll t = 1;
    while (t--) {
        solve();
    }
    return 0;
}