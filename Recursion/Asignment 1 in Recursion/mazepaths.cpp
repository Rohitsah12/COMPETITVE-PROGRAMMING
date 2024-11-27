#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;

#define int long long
#define endl '\n'

const int MOD = 1e9+7;
const int INF = LLONG_MAX >> 1;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds; // find_by_order, order_of_key

int solve(int sc, int sr, int ec, int er) {
    if (sr > er || sc > ec) return 0;
    if (sc == ec && sr == er) return 1;
    int rw = solve(sc + 1, sr, ec, er); // move right
    int dw = solve(sc, sr + 1, ec, er); // move down
    return rw + dw;
}

void print(int sc, int sr, int ec, int er, string s) {
    if (sr > er || sc > ec) return;
    if (sc == ec && sr == er) {
        cout << s << endl;
        return;
    }
    print(sc + 1, sr, ec, er, s + 'R'); // move right
    print(sc, sr + 1, ec, er, s + 'D'); // move down
}

signed main() {
    print(0, 0, 2, 2, "");
}
   