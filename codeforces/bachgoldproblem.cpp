#include <bits/stdc++.h>
typedef long long int ll;
#define endl "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()
const int inf = 1e9 + 10;
const int M = 1e9 + 7;
using namespace std;

void solve() {
    int a;
    cin>>a;
    if(a%2!=0){
        cout<<a/2<<endl;
        for(int i=0;i<a/2-1;i++){
            cout<<2<<" ";
        }
        cout<<3;
    }
    else{
        cout<<a/2<<endl;
        for(int i=0;i<a/2;a++){
            cout<<2<<" ";
        }
    }
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
    int t=1;
    // cin >> t; 
    while (t--) {
        solve();
    }
}
