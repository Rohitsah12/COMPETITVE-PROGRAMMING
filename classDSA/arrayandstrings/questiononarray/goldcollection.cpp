#include <bits/stdc++.h>
using namespace std;
int main() {
    long long t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<long long> v(n+1);
        for(int i = 1; i <= n; i++) { 
            cin >> v[i];
        }
        for(int i=1;i<=n;i++){
            v[i]+=v[i-1];
        }
        
        int q; 
        cin >> q;
        while(q--) {
            long long q1, q2;
            cin >> q1 >> q2;
            if(q1==1) cout<<v[q2]<<"\n";
            else cout<<(v[q2]-v[q1-1])<<"\n";
        }
    }
    return 0;
}