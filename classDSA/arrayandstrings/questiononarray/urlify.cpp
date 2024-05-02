#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ') {
            s[i] = '%';
            s.insert(i + 1, "20");
            i += 2;
        }
    }
    cout << s;
    return 0;
}
