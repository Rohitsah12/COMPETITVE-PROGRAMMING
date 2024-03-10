#include<bits/stdc++.h>
using namespace std;

bool isPrime(int num) {
    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0)
            return false;
    }
    return true;
}

void alternatePrimes(int n) {
    vector<int> primes;
    for (int num = 2; primes.size() < n; ++num) {
        if (isPrime(num)) {
            primes.push_back(num);
            if (primes.size() % 2 != 0)
                cout << num << " ";
        }
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    alternatePrimes(n);
    return 0;
}
