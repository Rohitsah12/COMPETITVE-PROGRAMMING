
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b, c;
        cin >> n >> a >> b >> c;
        
      
        int maxDishes = min(b, a + c);
        
      
        if (maxDishes >= n) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}