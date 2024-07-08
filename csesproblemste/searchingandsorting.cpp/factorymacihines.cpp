#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

using ll = long long;

// Function to compute gcd
ll gcd(ll a, ll b)
{
    return b == 0 ? a : gcd(b, a % b);
}

// Function to compute lcm
ll lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}

// Function to check if we can produce t products in `mid` seconds
bool check(const vector<ll> &arr, ll n, ll t, ll mid)
{
    ll total_products = 0;
    for (ll i = 0; i < n; i++)
    {
        total_products += mid / arr[i];
        if (total_products >= t)
            return true; // Early exit if condition is met
    }
    return total_products >= t;
}

// Function to solve the problem
void solve()
{
    ll n, t;
    cin >> n >> t;
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ll lo = 1, hi = *min_element(arr.begin(), arr.end()) * t, ans = -1;
    while (lo <= hi)
    {
        ll mid = lo + (hi - lo) / 2;
        if (check(arr, n, t, mid))
        {
            ans = mid;
            hi = mid - 1;
        }
        else
        {
            lo = mid + 1;
        }
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    // Assuming a single test case
    solve();

    return 0;
}
