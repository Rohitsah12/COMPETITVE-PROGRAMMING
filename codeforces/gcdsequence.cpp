#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

bool isNonDecreasing(const vector<int>& vec) {
    for (int i = 0; i < vec.size() - 1; ++i) {
        if (vec[i] > vec[i + 1]) {
            return false;
        }
    }
    return true;
}

bool canRemoveOneElementToMakeNonDecreasing(const vector<int>& vec) {
    for (int i = 0; i < vec.size(); ++i) {
        vector<int> temp;
        for (int j = 0; j < vec.size(); ++j) {
            if (i != j) {
                temp.push_back(vec[j]);
            }
        }
        if (isNonDecreasing(temp)) {
            return true;
        }
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        vector<int> gcdSequence;
        for (int i = 0; i < n - 1; ++i) {
            gcdSequence.push_back(gcd(a[i], a[i + 1]));
        }

        if (isNonDecreasing(gcdSequence)) {
            cout << "YES" << endl;
        } else if (canRemoveOneElementToMakeNonDecreasing(gcdSequence)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
