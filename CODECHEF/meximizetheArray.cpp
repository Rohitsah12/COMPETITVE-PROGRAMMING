#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n; // Initialize n
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        long long mex=0; // Use long long to avoid potential overflow
        for(int i=0;i<n;i++){
                mex += abs(v[i]-i);
        }
        cout << mex << endl;
    }
        
    return 0;
}