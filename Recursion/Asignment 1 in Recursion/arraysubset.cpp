#include<bits/stdc++.h>
using namespace std;
void subset(int idx,int n,vector<int>&v,vector<int>temp,vector<vector<int>>&ans){
    if(idx==n){
        
    }
    subset(idx+1,n,v,temp,ans);
    temp.push_back(v[idx]);
    subset(idx+1,n,v,temp,ans);

}
int main(){
    int n; cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int>temp;
    vector<vector<int>>ans;
    subset(0,n,v,temp,ans);
}