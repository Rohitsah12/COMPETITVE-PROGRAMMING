//Rohit Kumar sah
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    bool flg=true;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]==s[i+1]){
            flg=false;
            break;
        }
    }
    if(flg) cout<<"Yes";
    else cout<<"No";
}