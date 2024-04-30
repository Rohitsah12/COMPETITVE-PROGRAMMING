#include <bits/stdc++.h>
using namespace std;
//Rohit kumar sah
int minNewProblems(int n, vector<int>& a, vector<int>& b) {
    int newProblems = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] > b[i]) {
            a.insert(lower_bound(a.begin(), a.end(), b[i]), b[i]);
            a.pop_back();
            ++newProblems;
        }
    }
    return newProblems;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }
        cout << minNewProblems(n, a, b) << endl;
    }
    return 0;
}
