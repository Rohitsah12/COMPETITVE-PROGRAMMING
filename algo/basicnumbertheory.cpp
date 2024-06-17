#include<bits/stdc++.h>
using namespace std;
#define mod 10000000007
int modu(int a){
    return (a % mod + mod) % mod;
}
int mod_add(int a,int b){
    return modu(modu(a)+modu(b));
    // assuming a + b does not overflow
// return (a + b) % m;
}
int mod_sub(int a, int b) {
    return modu(modu(a) - modu(b));
// assuming assuming a - b does not overflow
// return mod(a – b, m);
}
int mod_multiply(int a,int b){
    return modu(modu(a)*modu(b));
    //assuming a*b doesnot overflow
    //return (a*b)%m;
}
int mod_pow(int a,int b){
    if(b==0) return 1;
    return mod_multiply(a,mod_pow(a,b-1));
}
int mod_powIter(int a,int b){
    int ans=1;
    for(int i=0;i<b;i++){
        ans=mod_multiply(ans,a);
    }
    return ans;
}
int main(){
    cout<<modu(1e9);
}