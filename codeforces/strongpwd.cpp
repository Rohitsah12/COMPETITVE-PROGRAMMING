#include <bits/stdc++.h>
using namespace std;

bool isSorted(string& s) {
    for (size_t i = 1; i < s.size(); ++i) {
        if (s[i] < s[i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        string numbers, chaar;
        bool flg = true;
        bool letter = false;

        for (char ch : s) {
            if (isdigit(ch)) {
                if (letter) {
                    flg = false; 
                    break;
                }
                chaar += ch;
            } else if (islower(ch)) {
                letter = true;
                numbers += ch;
            }
        }

        if (flg) {
            if (!isSorted(numbers) || !isSorted(chaar)) {
                flg = false;
            }
        }

        if (flg) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
