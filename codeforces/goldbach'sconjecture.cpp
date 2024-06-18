#include <iostream>
#include <vector>
#define ll long long
using namespace std;

const int MAXN = 1000000;
vector<bool> is_prime(MAXN + 1, true);

void sieve(ll n) {
    is_prime[0] = is_prime[1] = false;
    for (ll i = 2; i * i <= n; ++i) {
        if (is_prime[i]) {
            for (ll j = i * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }
}  

void solve(ll a) {
    for (ll i = 2; i <= a / 2; ++i) {
        if (is_prime[i] && is_prime[a - i]) {
            cout << a << " = " << i << " + " << (a - i) << endl;
            return;
        }
    }
    cout << "No pair of primes found for " << a << endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll max = 1e6;
    sieve(max);

    ll n;
    while (cin >> n && n != 0) {
        solve(n);
    }

    return 0;
}
