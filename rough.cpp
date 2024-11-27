#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;

#define int long long
#define endl '\n'

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds; // find_by_order, order_of_key
/*
 -------->>//Prefix sum
void solve()
{
    int n;
    cin >> n;
    int a[n + 1];
    int p[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        p[i] = a[i] +p[i-1];
    }
    int q; cin>>q;
    while(q--){
        int l,r; cin>>l>>r;
        int sum=p[r]-p[l-1];
        cout<<sum<<endl;
    }
}
*/
/*
-------->> //Difference Array
void solve(){
    int n,q; cin>>n>>q;
    int a[n+2]{};
    while(q--){
        int l,r,k; cin>>l>>r>>k;
        a[l]+=k;//adds k from L to N
        a[r+1]-=k;//Removes K from R+1 to N
-------->> //Add k  from L to R
    }
    for(int i=1;i<=n;i++){
        a[i]+=a[i-1];
    }
    for(int i=1;i<=n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
*/
/*
----------->>//2d Prefix sum
void solve(){
    int n,m; cin>>n>>m;
    int a[n+1][m+1],p[n+1][m+1];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
            p[i][j]=a[i][j]+p[i][j-1]+p[i-1][j]-p[i-1][j-1];
        }
    }
    int q;
    cin>>q;
    while(q--){
        int a,b,c,d; cin>>a>>b>>c>>d;
        int ans=p[c][d]-p[c][b-1]-p[a-1][d]+p[a-1][b-1];
        cout<<ans<<endl;
    }
}

*/





signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // int t;
    // cin>>t;
    while (t--)
    {
        // solve();
    }
}