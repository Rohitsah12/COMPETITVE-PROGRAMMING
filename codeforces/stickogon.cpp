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

        for (int i = 0; i < n; i++) {
            cin >> array[i];
            freq[array[i]]++;
        }

        int count_polygon = 0;
        for (const auto& p : freq) {
            if (p.second >= 3) { 
                count_polygon++;
            }
        }

        cout << count_polygon << endl;
    }
    return 0;
}
