#include<bits/stdc++.h>
using namespace std;

int main() {
    int k;
    cin >> k;

    int a[12];
    for (int i = 0; i < 12; ++i) {
        cin >> a[i];
    }

    if (k == 0) {
        cout << 0 << endl;
        return 0;
    }

    sort(a, a + 12, greater<int>());

    int total_growth = 0;
    int months = 0;
    for (int i = 0; i < 12; ++i) {
        total_growth += a[i];
        if (total_growth >= k) {
            months = i + 1;
            break;
        }
    }

    if (total_growth < k) {
        cout << -1 << endl;
    } else {
        cout << months << endl;
    }

    return 0;
}
