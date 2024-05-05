#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int maxofv=v[0];
        int minofv=v[0];
        for(int i=1;i<n;i++){
            maxofv=max(maxofv,v[i]);
            minofv=min(minofv,v[i]);
        }
        int answer=maxofv+minofv;
        vector<int>b;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(v[i]+v[j]==answer){
                    b.push_back(v[j]);
                }
            }
        }
        for(auto x:b){
            cout<<x<<" ";
        }
        cout<<endl;
        
    }

    return 0;
}