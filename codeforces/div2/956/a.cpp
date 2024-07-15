#include <iostream>
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#define ll long long
#define lld long double
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define fl(i,n) for(int i=0;i<n;i++)
#define rl(i,m,n) for(int i=n;i>=m;i--)
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define pi 3.141592653589793238
#define vr(v) v.begin(),v.end()
#define rv(v) v.end(),v.begin()
#define Rohit ios_base::sync_with_stdio(false);
#define Kumar cin.tie(NULL);
#define Sah cout.tie(NULL);
using namespace std;


void solve() {
    int n, k;
    cin >> n >> k;

    vector<int> c;
    c.push_back(n);
    int d = 0;
    while (c.size() < n) {
        int e = *max_element(c.begin(), c.end());
        c.erase(remove(c.begin(), c.end(), e), c.end());
        int f = min(k, e);
        for (int g = 0; g < f; ++g) {
            c.push_back(e / f);
        }
        c.back() += e % f;
        d++;
    }
    cout << d << endl;
}

signed main() {
    Rohit Kumar Sah
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
