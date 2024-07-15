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


void splitSequence(int n, int k) {
    vector<int> seq;
    seq.push_back(n);
    int splits = 0;
    while (seq.size() < n) {
        int largest = seq.back();
        seq.pop_back();
        for (int i = 0; i < min(k - 1, largest - 1); ++i) {
            seq.push_back(1);
        }
        seq.push_back(largest - k + 1);
        splits++;
    }
    cout << splits << endl;
}

void solve() {
    int n, k;
    cin >> n >> k;
    splitSequence(n, k);
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
