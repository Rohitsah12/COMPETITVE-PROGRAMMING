#include<bits/stdc++.h>
using namespace std;

int main() {
    string situation;
    cin >> situation;

    bool dangerous = false;
    int count = 1;

    for (int i = 1; i < situation.length(); ++i) {
        if (situation[i] == situation[i - 1]) {
            count++;
            if (count >= 7) {
                dangerous = true;
                break;
            }
        } else {
            count = 1;
        }
    }

    if (dangerous) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
