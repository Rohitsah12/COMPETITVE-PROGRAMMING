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
    vector<ll>a(n),b(m);
    vector<ll>c(m);
    fl(i,n) cin>>a[i];
    fl(j, m) cin>>b[j];
    ll i=0;ll j=0;
    while( i<n && j<m){
        if(a[i]<b[j]){
            i++;
        }
        else{
            // cout<<j<<endl;
            c[j]=i;
            j++;
        }
    }
    while(j<m){
        c[j]=n;
        j++;
    }
    fl(i,m) cout<<c[i]<<" ";
    
    
    

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
