#include <bits/stdc++.h>
typedef long long int ll;
#define endl "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()
const int M = 1e9 + 7;
using namespace std;

vector<bool> is_prime;

void sieve(ll n) {
    is_prime.resize(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (ll i = 2; i * i <= n; ++i) {
        if (is_prime[i]) {
            for (ll j = i * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }
}

void solve() {
    ll a;
    cin >> a;
    ll a_root = static_cast<ll>(sqrt(a));
    
    sieve(a_root);
    
    if (is_prime[a_root] && a_root * a_root == a) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
    
    ll t;
    cin >> t; 
    while (t--) {
        solve();
    }
    return 0;
}
