#include<bits/stdc++.h>
using namespace std;
bool frequency(string& s,int k){
    unordered_map<char,int>freq;
    for(char c:s){
        freq[c]++;
    }
    int oddcount=0;
    for(auto& pair:freq){
        if(pair.second%2!=0){
            oddcount++;
        }
    }
    if(oddcount<=1) return true;
    else{
        if(oddcount-k<=1) return true;
        else return false;
    }
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        bool ans=frequency(s,k);
        if(ans) cout<<"Yes\n";
        else cout<<"No\n";
    }
}