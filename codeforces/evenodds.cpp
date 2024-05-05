#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;

    int odd_count;
    if (n % 2 == 1) {
        odd_count = (n + 1) / 2;
    } else {
        odd_count = n / 2;
    }

    int result;
    if (k <= odd_count) {
        result = 2 * k - 1;
    } else {
        result = 2 * (k - odd_count);
    }

    cout << result << endl;

    return 0;
}
