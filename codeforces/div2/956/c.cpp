#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;

void solve(){
    ll n;
    cin >> n;
    
    vector<ll> all;
    for (ll i = n; i >= 1; --i) {
        if (all.empty() || (i | all.back()) == n) {
            all.push_back(i);
        }
    }
    
    reverse(all.begin(), all.end()); 
    
    cout << all.size() << endl;
    for (int i = 0; i < all.size(); ++i) {
        cout << all[i];
        if (i < all.size() - 1) {
            cout << " ";
        }
    }
    cout << endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
