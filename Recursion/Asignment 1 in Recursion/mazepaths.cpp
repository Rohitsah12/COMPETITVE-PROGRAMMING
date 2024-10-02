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
int solve(int sc,int sr,int ec,int er){
    if(sr>er||sc>ec) return 0;
    if(sc==er&& sc==ec) return 1;
    int rw=solve(sr,sc+1,er,ec);
    int dw=solve(sr+1,sc,er,ec);
    return rw+dw;
}
signed main(){
    cout<<solve(0,0,2,2);
}