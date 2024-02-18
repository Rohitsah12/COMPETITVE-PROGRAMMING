#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int p = 1; p <= t; p++) {
        int n, s;
        cin >> n >> s;

        if (s <= n)
            cout << s << endl;
        else
            cout << 2 * n - s << endl;
    }

    return 0;
}
