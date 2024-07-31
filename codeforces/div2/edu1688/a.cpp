#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int timetT(const string &s) {
    int time = 2;  
    for (int i = 1; i < s.length(); ++i) {
        if (s[i] == s[i - 1]) {
            time += 1;
        } else {
            time += 2;
        }
    }
    return time;
}

void solve() {
    string s;
    cin >> s;
    string s1 = s;
    int maxtime = 0;

    for (int i = 0; i <= s.length(); ++i) {
        for (char c = 'a'; c <= 'z'; ++c) {
            string temp = s.substr(0, i) + c + s.substr(i);
            int time = timetT(temp);
            if (time > maxtime) {
                maxtime = time;
                s1 = temp;
            }
        }
    }

    cout <<s1 << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
