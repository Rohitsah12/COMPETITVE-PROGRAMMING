#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n), b(n);
        for(int& ai : a){
            cin>>ai;
        }
        for(int& bi : b){
            cin>>bi;
        }
        
        int max_streak_om=0, max_streak_addy=0;
        int current_streak_om=0, current_streak_addy=0;
        
        // Calculate maximum streak for Om
        for(int i=0; i<n; i++){
            if(a[i] != 0) {
                current_streak_om++;
                max_streak_om = max(max_streak_om, current_streak_om);
            } else {
                current_streak_om = 0;
            }
        }
        
        // Calculate maximum streak for Addy
        for(int i=0; i<n; i++){
            if(b[i] != 0) {
                current_streak_addy++;
                max_streak_addy = max(max_streak_addy, current_streak_addy);
            } else {
                current_streak_addy = 0;
            }
        }
        
        if(max_streak_om > max_streak_addy) {
            cout<<"OM\n";
        } else if(max_streak_addy > max_streak_om) {
            cout<<"ADDY\n";
        } else {
            cout<<"DRAW\n";
        }
    }
    return 0;
}