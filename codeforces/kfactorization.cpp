#include<bits/stdc++.h>
using namespace std;

void primeFactorization(int n, vector<int> &factors) {
    for (int i = 2; i * i <= n; ++i) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }
    if (n > 1) factors.push_back(n);
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> factors;
    primeFactorization(n, factors);

    if (factors.size() < k) {
        cout << -1 << endl;
        return 0;
    }

    vector<int> result(k, 1);
    for (int i = 0; i < factors.size(); ++i) {
        result[i % k] *= factors[i];
    }

    for (int i = 0; i < k; ++i) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
