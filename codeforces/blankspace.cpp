#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        int current_count_of_zero=0;
        int maximum_count_of_zero=INT_MIN;
        for(int i=0;i<n;i++){
            if(v[i]==0) current_count_of_zero++;
            else current_count_of_zero=0;
            maximum_count_of_zero=max(current_count_of_zero,maximum_count_of_zero);
        }
        cout<<maximum_count_of_zero<<endl;
        
    }

    return 0;
}
