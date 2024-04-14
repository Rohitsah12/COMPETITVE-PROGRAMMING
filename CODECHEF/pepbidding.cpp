#include <bits/stdc++.h>
using namespace std;

int total_sum(const vector<int>& a) {
    int sum = 0;
    for(int val : a) {
        sum += val;
    }
    return sum;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> attA(n), defA(n), attP(n), defP(n);
        for (int i = 0; i < n; i++) {
            cin >> attA[i] >> defA[i] >> attP[i] >> defP[i];
        }
        int attackA = total_sum(attA);
        int defenseA = total_sum(defA);
        int attackP = total_sum(attP);
        int defenseP = total_sum(defP);
        
        if (attackA > attackP && defenseA > defenseP) {
            cout << "A\n";
        } else if (attackP > attackA && defenseP > defenseA) {
            cout << "P\n";
        } else {
            cout << "DRAW\n";
        }
    }
    return 0;
}
