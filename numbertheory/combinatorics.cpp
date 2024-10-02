#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;

#define int long long
#define endl '\n'

const int MOD=1e9+7;
const int INF=LLONG_MAX>>1;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds; // find_by_order, order_of_key

int fact[1000000],invfact[1000000];
void nc(){
    int p=MOD;
    fact[0]=1;
    int i;
    for(int i=1;i<n;i++){
        fact[i]=i*fact[i-1]%p;
    }
    i--;
    invfact[i]=pow(fact[i],p-2,p);
    for(i--;i>=0;i--){
        invfact[i]=invfact[i+1]*(i+1)%p;
    }
}
int ncr(int n,int r){
    if(r>n||n<0||r<0) return 0;
    return fact[n]*invfact[r]%MOD*invfact[n-r]%MOD;
}
void solve(){
    
}
signed main(){

}