#include <bits/stdc++.h>
using namespace std;
//Rohit kumar sah
int main() {
    int t;
    cin >> t; 

    for (int i = 0; i < t; ++i) {
        int n, m, k;
        cin >> n >> m >> k;

        int leftCoins[n];
        int rightCoins[m];
        
        for (int j = 0; j < n; ++j) {
            cin >> leftCoins[j];
        }
        
        for (int j = 0; j < m; ++j) {
            cin >> rightCoins[j];
        }
        
        int count = 0;
        for (int x = 0; x < n; ++x) {
            for (int y = 0; y < m; ++y) {
                if (leftCoins[x] + rightCoins[y] <= k) {
                    count++;
                }
            }
        }
        
        cout << count << endl;
    }

    return 0;
}
