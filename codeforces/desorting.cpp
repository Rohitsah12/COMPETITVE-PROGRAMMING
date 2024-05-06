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
        bool flg=true;
        for(int i=0;i<n-1;i++){
            if(v[i]>v[i+1]){
                flg=false;
                break;
            }
        }
        int count=0;
        if(flg==false) cout<<0<<endl;
        else{
            while(v[n-2]<=v[n-1]){
                v[n-2]++;
                v[n-1]--;
                count++;
            }
            cout<<count<<endl;
        }
        
    }

    return 0;
}
