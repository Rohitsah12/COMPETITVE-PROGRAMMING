#include <bits/stdc++.h>
using namespace std;
void solve() {
    string s; cin>>s;
    int n=s.size();
    stack<char>st;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(st.empty()) st.push(s[i]);
        else{
            if(st.top()==s[i]){
                st.pop();
                cnt++;
            }
            else st.push(s[i]);
        }
    }
    if(cnt%2==0) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    // int t;
    // cin >> t;
    // while (t--) {
        solve();
    // }
    
    return 0;
}
