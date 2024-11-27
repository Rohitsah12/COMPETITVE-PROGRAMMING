#include<bits/stdc++.h>
using namespace std;
int printmax(vector<int>&v,int idx,int maxi){
    if(v.size()==idx){
        return maxi;
    }
    if(maxi<v[idx]) maxi=v[idx];
    printmax(v,idx+1,maxi);
}
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
     cout<<printmax(v,0,INT_MIN);

}
