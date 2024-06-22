#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define lld long double
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define fl(i, n) for(int i = 0; i < n; i++)
#define rl(i, m, n) for(int i = n; i >= m; i--)
#define py cout << "YES\n";
#define pn cout << "NO\n";
#define pi 3.141592653589793238
#define vr(v) v.begin(), v.end()
#define rv(v) v.end(), v.begin()
#define Rohit ios_base::sync_with_stdio(false);
#define Kumar cin.tie(NULL);
#define Sah cout.tie(NULL);
using namespace std;
ll gcd(ll a,ll b){
    if(b==0) return a;
    else return gcd(b,a%b);
}

void solve() {
    ll n;
    cin>>n;
    ll firstmax=0;
    ll secondmax=0;
    for(int i=1;i<=n/2;i++){
        ll first=i;
        ll second=n-i;
        if(gcd(first,second)==1) {
            firstmax=first;
            secondmax=second;
        }
    }
    cout<<firstmax<<" "<<secondmax;
    
}
signed main() {
    Rohit Kumar Sah
    ll t = 1;
    while (t--) {
        solve();
    }
    return 0;
}