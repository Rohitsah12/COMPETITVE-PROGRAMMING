#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++){
            int x; cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        if(v[0]==v[n-1]) cout<<"No\n";
        else {
            cout<<"Yes\n";
            swap(v[1],v[n-1]);
            for(int i=0;i<n;i++){
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
        
    }

    return 0;
}
