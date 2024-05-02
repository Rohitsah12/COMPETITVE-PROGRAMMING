#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,t;
    cin>>s>>t;
    int count=0;
    for(int i=0;i<s.size();i++){
        if(s[i]!=t[i]){
            count++;
        }
    }
    if(count>1) cout<<"False";
    else cout<<"Yes";
    
}