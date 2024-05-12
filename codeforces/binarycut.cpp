#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.size();
        int ans=0;
        int i=0;
        bool flg=false;
        while(i<n){
            if(s[i]=='0'){
                ans++;
                while(i<n && s[i]=='0'){
                    i++;
                }
                if(i!=n){
                    flg=true;
                }
            }
            else{
                if(s[i]=='1'){
                    ans++;
                    while(i<n && s[i]=='1'){
                        i++;
                    }
                }
            }
        }
        if(flg) ans--;
        cout<<ans<<"\n";
        
    }
    return 0;
}
