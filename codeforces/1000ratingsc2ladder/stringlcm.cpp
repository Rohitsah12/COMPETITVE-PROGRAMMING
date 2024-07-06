#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define lld long double
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define fl(i,n) for(int i=0;i<n;i++)
#define rl(i,m,n) for(int i=n;i>=m;i--)
#define py cout<<"YES\n";
#define pn cout<<"NO\n";
#define pi 3.141592653589793238
#define vr(v) v.begin(),v.end()
#define rv(v) v.end(),v.begin()
#define Rohit ios_base::sync_with_stdio(false);
#define Kumar cin.tie(NULL);
#define Sah cout.tie(NULL);
using namespace std;

ll gcd(ll a, ll b){
    if (b == 0) return a;
    return gcd(b, a % b);
}

ll lcm(ll a, ll b){
    return (a / gcd(a, b) * b);
}
string repeatString(const string& str, ll n) {
    string result;
    for (ll i = 0; i < n; ++i) {
        result += str;
    }
    return result;
}
void solve(){
    string a, b;
    cin >> a >> b;
    ll x = a.length();
    ll y = b.length();
    ll z = lcm(x, y); 
    ll aProper = z / x;
    ll bproper = z / y;
    string repeatedA = repeatString(a, aProper); 
    string repeatedB = repeatString(b, bproper); 
    if (repeatedA == repeatedB) 
        cout << repeatedA << endl;
    else 
        cout << -1 << endl;
}

signed main(){
    Rohit Kumar Sah
    ll t;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}
