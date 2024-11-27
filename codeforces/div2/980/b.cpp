#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        // Sort in descending order
        sort(a.rbegin(), a.rend());
        
        // Accumulate cans until we reach or exceed k cans
        int totalCans = 0, buttonPresses = 0;
        for (int i = 0; i < n && totalCans < k; i++) {
            totalCans += a[i];
            buttonPresses++;
        }
        
        cout << buttonPresses << endl;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
