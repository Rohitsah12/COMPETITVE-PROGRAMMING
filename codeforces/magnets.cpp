#include <iostream>
#include <vector>
#include <string>

using namespace std;

int countGroups(int n, const vector<string>& magnets) {
    int groups = 1;  
        if (magnets[i] != magnets[i - 1]) {
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
