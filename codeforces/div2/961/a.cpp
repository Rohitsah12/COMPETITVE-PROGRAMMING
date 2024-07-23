#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

int mini(int b, int c) {
    int d = 0;
    int i = 1;
    
    while (c > 0) {
        if (i == 1) {
            c -= b;
        } else {
            int cap = b - i + 1;
            
            if (c > cap) {
                d++;
                c -= 2 * cap;
            } else {
                c -= cap;
            }
        }
        
        d++;
        i++;
    }
    
    return d;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        cout << mini(n, k) << endl;
    }
    
    return 0;
}
