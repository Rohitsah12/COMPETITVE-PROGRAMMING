#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            a.push_back(x);
        }
        int min=INT_MAX;
        for(int i=0;i<n;i++){
            if(a[i]<min){
                min=a[i];
            }
        }
        if(a[0]==min && a[n-1]==min) cout<<"Yes\n";
        else cout<<"No\n";
    }
}