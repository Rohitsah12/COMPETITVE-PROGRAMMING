#include <iostream>
#include <vector>
#include <algorithm>
#define int long long
using namespace std;

int gcd(int a, int b) {
    if (a == 0) return b;
    if (b == 0) return a;
    if (a == b) return a;
    if (a > b) return gcd(a - b, b);
    return gcd(a, b - a);
}

void sol() {
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; ++i) 
        cin >> v[i];

    int x = 1;

    for (int i = 0; i < n; ++i) {
        int y = gcd(x, v[i]);
        y = v[i] / y;
        x *= y;
    }
    int sum = 0;
    vector<int> ans;
    for (int i = 0; i < n; ++i) {
        sum += x / v[i];
        ans.push_back(x / v[i]);
    }

    if (sum >= x) {
        cout << -1 << endl;
    } else {
        for (int i = 0; i < n; ++i) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
}

signed main() {
    int test;
    cin >> test;
    while (test--) {
        sol();
    }

    return 0;
}
