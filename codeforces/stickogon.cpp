#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> array(n);
        unordered_map<int, int> freq;

        // Input stick lengths and count their occurrences
        for (int i = 0; i < n; i++) {
            cin >> array[i];
            freq[array[i]]++;
        }

        int count_polygon = 0;
        for (auto it = freq.begin(); it != freq.end(); it++) {
            if (it->second >= 3) { // If a stick length occurs at least 3 times
                count_polygon++;
            }
        }

        cout << count_polygon << endl;
    }
    return 0;
}
