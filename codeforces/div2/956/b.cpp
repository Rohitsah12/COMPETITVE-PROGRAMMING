#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<int> rv(const string& s) {
    vector<int> v;
    char p = '1';
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '1') v.push_back(1);
        if (s[i] == '0' && p == '1') v.push_back(0);
        p = s[i];
    }
    
    return v;
}
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> v = rv(s);
    int c0 = 0, c1 = 0;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] == 1) c1++;
        else c0++;
    }
    if (c0 >= c1) cout << "NO" << endl;
    else cout << "YES" << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
