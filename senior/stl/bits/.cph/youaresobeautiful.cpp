#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'

const int MOD=1e9+7;
const int INF=LLONG_MAX>>1;
void solve(){
    int n;
	cin >> n;
 
	int arr[n];
	for(int i = 0; i < n; i++) cin >> arr[i];
 
	set<int> first;
	set<int> s;
	set<int> last;
	map<int, int> hm;
 
	for(int i = 0; i < n; i++) {
		if(s.count(arr[i]) == 0) first.insert(i);
		s.insert(arr[i]);
		hm[arr[i]] = i;
	}
 
	for(auto i : hm) last.insert(i.second);
	int ans = 0;
	int cnt = 0;
	for(int i = n - 1; i >= 0; i--) {
 
		if(last.count(i)) cnt++;
		if(first.count(i)) ans += cnt;
 
	}
 
	cout << ans << '\n';
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

