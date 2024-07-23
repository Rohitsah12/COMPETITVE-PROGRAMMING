#include <iostream>
#include <vector>
#include <string>
#define ll long long
#define fl(i,n) for(int i=0;i<n;i++)
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define Rohit ios_base::sync_with_stdio(false);
#define Kumar cin.tie(NULL);
#define Sah cout.tie(NULL);
using namespace std;

void op(char &ch, int delta) {
    ch = char('0' + (ch - '0' + delta) % 3);
}

void solve() {
    ll n, m;
    cin >> n >> m;
    vector<string> a(n), b(n);

    fl(i, n) cin >> a[i];
    fl(i, n) cin >> b[i];

    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < m - 1; j++) {
            while(a[i][j] != b[i][j]) {
                op(a[i][j], 1);
                op(a[i][j + 1], 2);
                op(a[i + 1][j], 2);
                op(a[i + 1][j + 1], 1);
            }
        }
    }

    if(a == b) py
    else pn
}

int main() {
    Rohit Kumar Sah
    ll t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
    
}
