#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
  
    int freq[101] = {0};  
    
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        freq[v[i]]++;
    }

    int maxi = 0;
    for (int i = 1; i <= 100; i++) {  
        maxi = max(maxi, freq[i]);
    }

    cout << n - maxi << endl; 
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
