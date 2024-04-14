#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string r;
    for(int i=0;i<s.size();i+=2){
        r+=s[i];
    }
    sort(r.begin(),r.end());
    for(int i=0;i<r.size()-1;i++){
        cout<<r[i]<<"+";
    }
    cout<<r.back();
    
}