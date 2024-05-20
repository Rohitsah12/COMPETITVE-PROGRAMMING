#include<bits/stdc++.h>
typedef long long int ll;
#define endl "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()
const int inf = 1e9 + 10;
const int M = 1e9 + 7;
using namespace std;
void solve(){
    int x, y;
    cin >> x >> y;
    
    int screens = y / 2; 
    y %= 2;  
    x = max(0, x - screens * 7);  
    
    if (y) {  
        screens++;
        x = max(0, x - 11); 
    }

    if (x > 0) {
        screens += (x + 14) / 15;  
    }
    
    cout << screens << endl;
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t; cin>>t; while(t--){
        solve();
    }
}