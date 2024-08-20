#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD=1e9+7;
const int INF=LLONG_MAX>>1;
pair<string, string> can_form_subsequence(string s, string t) {
    int t_len = t.size();
    int t_index = 0;
    
    for (int i = 0; i < s.size(); i++) {
        if (t_index < t_len && (s[i] == t[t_index] || s[i] == '?')) {
            if (s[i] == '?') {
                s[i] = t[t_index];
            }
            t_index++;
        } else if (s[i] == '?') {
            s[i] = 'a';
        }
    }
    
    if (t_index == t_len) {
        return {"YES", s};
    } else {
        return {"NO", ""};
    }
}

void solve() {

    vector<string> results;

        string s, t;
        cin >> s >> t;
        
        auto result = can_form_subsequence(s, t);
        if (result.first == "YES") {
            results.push_back(result.first);
            results.push_back(result.second);
        } else {
            results.push_back(result.first);
        }    
    for (const auto &result : results) {
        cout << result << "\n";
    }
    
    return;
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