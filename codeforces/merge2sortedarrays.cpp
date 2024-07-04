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


void solve() {
    ll n,m;
    cin>>n>>m;
    ll x=0;ll y=0;
    vector<ll>a(n);
    vector<ll>b(m);
    vector<ll>c(n+m);
    fl(i,n) cin>>a[i];
    fl(i,m) cin>>b[i];
    while(x<n && y<m){
        if(a[x]<b[y]){
            c[x+y]=a[x];
            x++;
        }
        else{
            c[x+y]=b[y];
            y++;
        }
    }
    while(x<n){
        c[x+y]=a[x];
        x++;
    }
    while(y<m){
        c[x+y]=b[y];
        y++;
    }
    fl(i,n+m) cout<<c[i]<<" ";
    

}

int main() {
   Rohit Kumar Sah
    
    ll t = 1;
    // ll t;
    // cin>>t;
    while (t--) {
        solve();
    }
    
    return 0;
}
