#include <bits/stdc++.h>
using namespace std;

int totalsumofarray(vector<int>& v) {
    return accumulate(v.begin(), v.end(), 0);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);int cnt=0;int ans=0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            if(v[i]<0) cnt++;
        }
        while(cnt>n-cnt){
            cnt--;
            ans++;
        }
        cout<<ans+(cnt%2)<<endl;
        
    }

    return 0;
}
