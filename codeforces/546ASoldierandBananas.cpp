//Rohit Kumar Sah 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,w;
    cin>>k>>n>>w;
    int sum=0;
    for(int i=1;i<=w;i++){
        sum+=i*k;
    }
    if(sum<n){
        cout<<"0";
    }
    else{
    cout<<sum-n;
    }
}