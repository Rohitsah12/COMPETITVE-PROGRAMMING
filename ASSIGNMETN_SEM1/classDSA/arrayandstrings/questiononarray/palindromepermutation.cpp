#include <bits/stdc++.h>
using namespace std;

bool permutationpalindrome(const string& s) {
    unordered_map<char, int> charFreq;
    for (char c : s) {
        charFreq[c]++;
    }
    int oddCount = 0;
    for (const auto& pair : charFreq) {
        if (pair.second % 2 != 0) {
            oddCount++;
        }
    }
    return oddCount <= 1;
}

int main() {
    string s;
    cin >> s;
    if (permutationpalindrome(s)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
