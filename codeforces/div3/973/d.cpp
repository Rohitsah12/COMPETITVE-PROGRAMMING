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
void solve(){
    int n,d,k;
    cin>>n>>d>>k;
    vector<int>intime[n+1];
    vector<int>outtime[n+1];
    for(int i=1;i<=k;i++){
        int l,r;
        cin>>l>>r;
        intime[l].push_back(i);
        outtime[r].push_back(i);
    }
    set<int>st;
    for(int i=1;i<=d;i++){
        for(auto c:intime[i]){
            st.insert(c);
        }
    }
    int sz=st.size();
    pair<int,int>mother={sz,1};
    pair<int,int>brother={sz,1};
    for(int i=d+1;i<=n;i++){
        for(auto c:outtime[i-d]){
            st.erase(c);
        }
        for(auto c:intime[i]){
            st.insert(c);
        }
        int sz=st.size();
        if(sz<mother.first){
            mother.first=sz;
            mother.second=i-d+1;
        }
        if(sz>brother.first){
            brother.first=sz;
            brother.second=i-d+1;
        }

    }
    cout<<brother.second<<" "<<mother.second<<endl;
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