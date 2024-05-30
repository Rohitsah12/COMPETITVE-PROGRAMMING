#include<bits/stdc++.h>
typedef long long int ll;
#define endl "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()
const int inf = 1e9 + 10;
const int M = 1e9 + 7;
using namespace std;
bool isSorted(string& s) {
    for (size_t i = 1; i < s.size(); ++i) {
        if (s[i] < s[i - 1]) {
            return false;
        }
    }
    return true;
}
void solve(){
 int n;
        string s;
        cin >> n >> s;

        string numbers, chaar;
        bool flg = true;
        bool letter = false;

        for (char ch : s) {
            if (isdigit(ch)) {
                if (letter) {
                    flg = false; 
                    break;
                }
                chaar += ch;
            } else if (islower(ch)) {
                letter = true;
                numbers += ch;
            }
        }

        if (flg) {
            if (!isSorted(numbers) || !isSorted(chaar)) {
                flg = false;
            }
        }

        if (flg) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
}
signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int t; cin>>t; while(t--){
        solve();
    }
}