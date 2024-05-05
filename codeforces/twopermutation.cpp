#include <bits/stdc++.h>
using namespace std;
//Rohit kumar sah
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,a,b;
        cin >> n>>a>>b;
        if((a+b+2<=n)||(n==a&&n==b)) cout<<"Yes\n";
        else cout<<"No\n";
        
    }
    return 0;
}