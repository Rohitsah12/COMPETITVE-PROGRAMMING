#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>num(n);
    for(int i=1;i<=n;i++){
        cin>>num[i];
    }
    // for(int i=1;i<=n;i++){
    //     cout<<num[i]<<" ";
    // }
    sort(num.begin(),num.end());
    for(int i=1;i<=n;i++){
        if(num[i]!=i){
            cout<<i;
            break;
        }
    }

}