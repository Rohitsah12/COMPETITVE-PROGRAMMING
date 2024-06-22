#include <bits/stdc++.h>
using namespace std;

long long gcd(long long x, long long y) {
    if (y == 0) return x;
    else return gcd(y, x % y);
}

int main() {
    long long n, x;
    cin >> n >> x;
    
    vector<long long> v(n); 
    for (long long i = 0; i < n; i++) {
        cin >> v[i]; 
    }
    
    v.push_back(x); 
    sort(v.begin(), v.end()); 
    
    vector<long long> diff;
    for (long long i = 0; i < n; i++) {
        diff.push_back(v[i + 1] - v[i]); 
    }
    
    long long ans = diff[0];
    for (long long i = 1; i < diff.size(); i++) {
        ans = gcd(ans, diff[i]);
    }
    
    cout << ans << endl;

    return 0;
}
