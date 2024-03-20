#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Read input
    int n;
    cin >> n;
    vector<int> columns(n);
    for (int i = 0; i < n; ++i) {
        cin >> columns[i];
    }

    // Sort the columns
    sort(columns.begin(), columns.end());

    // Output the sorted columns
    for (int i = 0; i < n; ++i) {
        cout << columns[i] << " ";
    }
    cout << endl;

    return 0;
}
