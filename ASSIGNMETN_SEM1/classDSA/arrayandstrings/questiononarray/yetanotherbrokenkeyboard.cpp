#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    unordered_set<char> available_letters;
    for (int i = 0; i < k; ++i) {
        char letter;
        cin >> letter;
        available_letters.insert(letter);
    }

    long long count = 0;
    int i = 0;
    while (i < n) {
        int j = i;
        while (j < n && available_letters.count(s[j]) > 0) {
            ++j;
        }
        int len = j - i;
        count += (long long)len * (len + 1) / 2;
        i = j + 1;
    }

    cout << count << endl;

    return 0;
}
