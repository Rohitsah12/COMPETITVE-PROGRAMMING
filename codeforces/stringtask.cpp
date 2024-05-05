#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    // Convert string to lowercase
    for(int i = 0; i < s.size(); i++) {
        s[i] = tolower(s[i]);
    }

    string r;
    for(int i = 0; i < s.size(); i++) {
        // Check if the character is not a vowel
        if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] != 'y') {
            r.push_back(s[i]); // Add non-vowel characters to string r
        }
    }

    // Print result
    for(int i = 0; i < r.size(); i++) {
        cout << "." << r[i];
    }

    return 0;
}
