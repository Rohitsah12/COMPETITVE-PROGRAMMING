#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;

        vector<int> arr(n);
        for (int j = 0; j < n; j++) {
            cin >> arr[j];
        }

        vector<int> v;
        v.reserve(n); 
        v.push_back(arr[0]);

        for (int i = 1; i < n; i++) {
            int def = arr[i] - arr[i - 1]; 
            v.push_back(def);
        }

        v.push_back(2*(x - arr[n - 1]));

        
        sort(v.begin(),v.end());
        // for (int k = 0; k < v.size(); ++k) {
        //     cout << v[k] << " ";
        // }
        cout<<v.back()<<endl;
        // cout << endl;
    }

    return 0;
}
