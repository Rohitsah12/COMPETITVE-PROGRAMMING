#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    
    // Reading the array
    for (int i = 0; i < n; i++) cin >> v[i];
    
    vector<int> result(n, -1);  // Result array initialized to -1
    stack<int> st;
    
    // Traverse the array from right to left
    for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && v[st.top()] <= v[i]) {
            st.pop();  // Pop elements from stack that are not greater than v[i]
        }
        
        if (!st.empty()) {
            result[i] = st.top();  // Store the nearest greater element index
        }
        
        st.push(i);  // Push the current index onto the stack
    }
    
    int q;
    cin >> q;

    while (q--) {
        int x;
        cin >> x;
        if (result[x - 1] == -1) {
            cout << -1 << endl;  // If no greater element exists, print -1
        } else {
            cout << result[x - 1] + 1 << endl;  // Output the 1-based index
        }
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    // Uncomment the following if there are multiple test cases
    // cin >> t;
    while (t--) {
        solve();
    }
}
