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
    // cout<< ((1<<3)-1) <<endl;
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i< (1<<n) ;i++){ //0000 --> 1111 n=4 . In i, the xth bit represents whether the xth index was taken or not taken
        for(int j=0;j<n;j++){//j represents the jth index
              if(i>>j & 1){
                 cout<<a[j]<<" ";
              }
        }
        cout<<endl; 
    } 
}