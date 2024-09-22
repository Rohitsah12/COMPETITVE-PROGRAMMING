#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD = 1e9+7;
const int INF = LLONG_MAX>>1;

void solve(){
    int n, k;
    cin >> n >> k;
    
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    vector<pair<int, int>> a;
    for(int i = 0; i < n; i++){
        a.push_back({v[i], i});
    }

    // Sort based on values in v, but keep original indices
    sort(a.begin(), a.end());
    
    // Initial answer where every element gets floor(k / n)
    vector<int> ans(n, k / n);

    // Remaining elements after evenly distributing
    int left = k % n;
    
    // Add 1 to the first 'left' elements in the sorted order
    for(int i = 0; i < left; i++){
        ans[a[i].second] += 1;
    }

    // Output the final result for each element
    for(int i = 0; i < n; i++){
        cout << ans[i] << endl;
    }
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    // cin >> t; // Uncomment if multiple test cases are expected
    while(t--){
        solve();
    }
}
