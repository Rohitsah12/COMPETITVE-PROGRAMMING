#include <bits/stdc++.h>
typedef long long int ll;
#define endl "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()
const int inf = 1e9 + 10;
const int M = 1e9 + 7;
using namespace std;

// bool check(const string& A, const string& B) {
//     int n = B.size(), m = A.size();
//     int i = 0, j = 0;
//     while (i < n && j < m) {
//         if (B[i] == A[j]) {
//             j++;
//         }
//         i++;
//     }
//     return j >= m;
// }

void solve() {
    string a,b;
    cin>>a>>b;
    swap(a[0],b[0]);
    cout<<a<<" "<<b<<endl;
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
    int t;
    cin >> t; 
    while (t--) {
        solve();
    }
}
