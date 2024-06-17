#include<bits/stdc++.h>
using namespace std;
#define mod 10000000007
const int MAX_N = 100000;
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

// primality testing by trial division in o(root(n))
bool is_prime1(long long n){
    int ans=true;
    for(long long i=2;i*i<=n;i++){
        if(n%i==0) ans=false;
    }
    return ans;
}
//Sieve of erasthothenes
bool is_prime[MAX_N+1];
void sieve(int n){
    is_prime[0]=is_prime[1]=false;
    for(int i=2;i<=n;i++){
        is_prime[i]=true;
    }
    for(int i=2;i<=n;i++){
        if(is_prime[i]){
            for(int k=2;k*i<=n;k++){
                is_prime[k*i]=false;
            }
        }
    }
}
int main(){
    int n;
    cin>>n;
    sieve(n);
    cout<<is_prime[n];
}