#include <bits/stdc++.h>
typedef long long int ll;
#define endl "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()
const int inf = 1e9 + 10;
const int M = 1e9 + 7;
using namespace std;

void pm(int start, int end, vector<pair<int, int>>& moves) {
    moves.pb({start, end});
}

void hanoi(int n, int start, int end, vector<pair<int, int>>& moves) {
    if (n == 1) {
        pm(start, end, moves);
    } else {
        int other = 6 - (start + end); // Correct calculation of the auxiliary peg
        hanoi(n - 1, start, other, moves);
        pm(start, end, moves);
        hanoi(n - 1, other, end, moves);
    }
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int n;
    cin >> n;
    vector<pair<int, int>> moves;
    
    hanoi(n, 1, 3, moves);
    cout << moves.size() << endl; 
    for (auto move : moves) {
        cout << move.first << " " << move.second << endl;
    }

    return 0;
}
