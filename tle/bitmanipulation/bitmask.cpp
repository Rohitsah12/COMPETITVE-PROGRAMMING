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

signed main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
        int n; cin>>n; 
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        //bitmasking bruteforce code
        for(int i=0;i<(1<<n);i++){
            for(int j=0;j<n;j++){
                if(i & (1<<j)){
                    cout<<v[j]<<" ";
                }
            }
             cout<<endl;
        }
}