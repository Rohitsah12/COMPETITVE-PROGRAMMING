#include<bits/stdc++.h>
using namespace std;
#define int long long
long long mod=10000000007;//1e9+7
signed main(){
//a+b-c*d+e^f/7
int a,b,c,d,e,f,g;
cin>>a>>b>>c>>d>>e>>f;
    int temp1=(a+b)%mod;
    int temp2=c*d;
    int temp3=temp1-temp2;
    int temp4=e^f;
    int temp5=temp4/g;
    int temp6=temp3+temp5;

}