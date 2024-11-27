#include<bits/stdc++.h>
using namespace std;
vector<int> removeElem(vector<int>&ans,vector<int>&v,int idx){
    if(idx==v.size()){
        return ans;
    }
    if(v[idx]==1){
        removeElem(ans,v,idx+1);
    }
    else{
        ans.push_back(v[idx]);
        removeElem(ans,v,idx+1);
    }
}
int main(){
    int n; cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int>ans;
    removeElem(ans,v,0);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}