#include<bits/stdc++.h>
using namespace std;
//rohit kumar sah
int countGroups(int n, const vector<string>& magnets) {
    int groups = 1;  // Initialize groups count to 1, as there's at least one group with the first magnet
    for (int i = 1; i < n; ++i) {
        if (magnets[i] != magnets[i - 1]) {  // If current magnet's polarity is different from the previous one
            groups++;  
        }
    }
    return groups;
}

int main() {
    int n;
    cin >> n;

    vector<string> magnets(n);
    for (int i = 0; i < n; ++i) {
        cin >> magnets[i];
    }

    int result = countGroups(n, magnets);

    cout << result << endl;

    return 0;
}
