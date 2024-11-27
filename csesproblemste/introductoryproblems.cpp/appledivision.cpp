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
int n;
int a[23];
int sum=0;
//returns the minimal difference if i am at index i,and my current set sum is s
int solve(int i=0,int s=0){
    if(i==n){
        int other_set_sum=sum-s;
        return abs(s-other_set_sum);
    }
     return min(solve(i+1,s+a[i]),solve(i+1,s));
}
signed main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i], sum+=a[i];
    }
    cout<<solve()<<endl;
}