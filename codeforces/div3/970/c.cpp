#include <iostream>
#include <cmath>
#include <vector>
#define int long long
using namespace std;

vector<int> longest_good_array(int t, vector<pair<int, int>>& test_cases) {
    vector<int> results;
    for (const auto& case_pair : test_cases) {
        int l = case_pair.first;
        int r = case_pair.second;
        int max_diff = r - l;
        int k = static_cast<int>((sqrt(1 + 8 * max_diff) - 1) / 2);
        results.push_back(k + 1);
    }
    return results;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    vector<pair<int, int>> test_cases(t);
    for (int i = 0; i < t; ++i) {
        int l, r;
        cin >> l >> r;
        test_cases[i] = make_pair(l, r);
    }

    vector<int> results = longest_good_array(t, test_cases);
    for (int result : results) {
        cout << result << '\n';
    }

}
