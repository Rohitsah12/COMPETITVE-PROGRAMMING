
#include <bits/stdc++.h>
using namespace std;

int maxPolygons(vector<int>& sticks) {
    sort(sticks.begin(), sticks.end());
    int count = 0;
    int n = sticks.size();
    for (int i = n - 1; i >= 0; i--) {
        int sides = sticks[i];
        int sticks_needed = sides ;
        if (i - sticks_needed >= 0) {
            count++;
            sticks.erase(sticks.begin() + i - sticks_needed, sticks.begin() + i + 1);
            i = i - sticks_needed;
        }
    }

    return count-1;
}

int main() {
    int testcases;
    cin >> testcases;

    while (testcases--) {
        int n;
        cin >> n;
        vector<int> sticks(n);
        for (int i = 0; i < n; i++) {
            cin >> sticks[i];
        }
        cout << maxPolygons(sticks) << endl;
    }

    return 0;
}