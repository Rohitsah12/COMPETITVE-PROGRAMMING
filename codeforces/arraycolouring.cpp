#include<bits/stdc++.h>
using namespace std;
int main(){
      int q;
    cin >> q;
    while (q--) {
        int n;
        cin >> n;
        vector<int> a;
        for(int i=0;i<n;i++){
             int x;
             cin>>x;
             a.push_back(x);
        }
        int sum=0;
        for(int i=0;i<n;i++){
             sum+=a[i];
        }
        if(sum%2==0) cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}