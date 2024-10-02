#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD = 1e9+7;

// Efficient power function (not modulo, since powers can be large)
int binpow(int a, int b) {
    int res = 1;
    while (b > 0) {
        if (b % 2) res *= a;  // if b is odd
        a *= a;
        b /= 2;
    }
    return res;
}

void solve() {
    int n, k;
    cin >> n >> k;

    if(k==1){
        cout<<n<<endl;
        return;
    }
    int ans=0;
    while(n>0){
        ans+=n%k;
        n/=k;
    }
    cout<<ans<<endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
