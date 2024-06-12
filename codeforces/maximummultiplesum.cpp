#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    int maxi = 0;
    int x = 2;//Start x with 2
    for (int i = 2; i <= n; i++) {
        int k = n / i;
        int sum = i * (k * (k + 1)) / 2;
        if (sum > maxi) {
            maxi = sum;
            x = i;
        }
    }
    
    cout << x << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
