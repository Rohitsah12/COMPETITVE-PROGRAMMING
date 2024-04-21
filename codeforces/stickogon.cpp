#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxPolygons(int n, vector<int>& sticks) {
    sort(sticks.begin(), sticks.end(), greater<int>()); 
    int polygons = 0;

    for (int i = 0; i < n; ++i) {
        if (sticks[i] >= i + 1) { 
            polygons++;
        } else {
            break;
        }
    }

    return polygons;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> sticks(n);

        for (int i = 0; i < n; ++i) {
            cin >> sticks[i];
        }

        cout << maxPolygons(n, sticks) << endl;
    }

    return 0;
}
