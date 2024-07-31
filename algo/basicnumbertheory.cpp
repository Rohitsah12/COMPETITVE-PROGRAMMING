#include<bits/stdc++.h>
using namespace std;
#define mod 10000000007
const int MAX_N = 100000;
using ll=long long;
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
bool is_prime_rootn(long long n){
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
            // for(int k=2;k*i<=n;k++){
            //     is_prime[k*i]=false;
            // }
            for(int j=2*i;j<=n;j+=i){
                is_prime[j]=false;
            }
        }
    }
}
//How to factorize
//A simpler way
vector<int> bases ,  powers;
for(int p : is_prime){
    int n;
    if(n%p==0){
        int exponent=0;
        while(n%p==0){
            n/=p;
            exponent++:
        }
        bases.push_back(p);
        power.push_back(exponent);
    }
}

// better way;
//Idea: How did we speed up primality testing
vector<int>bases,powers;
for(int i=0;i<primes.size() && square(is_prime[i])<=n;i++){
    if(is_prime(n)){
        bases.push_back(n);
        powers.push_back(1);
        n/=n;
    }
    else{
        //do as before
        int exponent=0;
        while(n%p==0){
            n/=p;
            exponent++:
        }
        bases.push_back(p);
        power.push_back(exponent);
    }
}
// A simpler way

vector<int> bases, powers;
for(int i = 0; i * i <= n; i++) {
if(n % i == 0) {
int exponent = 0;
while(n % i == 0) {
n /= i;
exponent++;
}
bases.push_back(i);
powers.push_back(exponent);
}
}

if(n>1){
    bases.push_back(n);
    powers.push_back(1);
}
//x^p%p=x
int mod_div(int a,int b,int d){
    return mod_mul(a,mod_pow(b,d-2,d));
    //asssuming a*b doesnot overflow
    //return (a*b)%d;
}

vector<ll> get_divisors(ll n) {
    vector<ll> divs;
    for (int i = 1; 1LL * i * i <= n; i++) {
        if (n % i == 0) {
            divs.push_back(i);
            if (i != n / i) {
                divs.push_back(n / i);
            }
        }
    }
    sort(divs.begin(), divs.end());
    return divs;
}
int main(){
    int n;
    cin>>n;
    sieve(n);
    cout<<is_prime[n];
}


#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD=1e9+7;
const int INF=LLONG_MAX>>1;
void solve(){
    
}
signed main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    // int t=1;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}

#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD=1e9+7;
const int INF=LLONG_MAX>>1;
void solve(){
    
}
signed main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    // int t=1;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}