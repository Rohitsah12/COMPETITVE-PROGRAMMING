#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int a,b,c;
    while (t--) {
        cin>>a>>b>>c;
        if(a<b && b<c) cout<<"STAIR\n";
        else if(a<b&& b>c) cout<<"PEAK\n";
        else cout<<"NONE\n";
    }
    return 0;
}
