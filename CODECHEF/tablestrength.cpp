#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        
        vector<int> strengths(N);
        for (int i = 0; i < N; i++) {
            cin >> strengths[i];
        }

        // Sort the strengths in non-decreasing order
        sort(strengths.begin(), strengths.end());

        int maxWeight = 0;

        for (int i = 0; i < N; i++) {
            maxWeight = max(maxWeight, strengths[i] * (N - i));
        }

        cout << maxWeight << endl;
    }

    return 0;
}
