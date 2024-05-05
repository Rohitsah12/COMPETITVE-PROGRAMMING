#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int totalproduct=1;
        for(int i=0;i<n;i++){
            totalproduct*=v[i];
        }
        bool flg=false;
        int product=1;
        for(int i=0;i<n;i++){
            product*=v[i];
            if(product==totalproduct){
                flg=true;
                cout<<i<<endl;
                break;
            }
            else totalproduct/v[i];
        }
        if(!flg) cout<<-1<<endl;
    }
}