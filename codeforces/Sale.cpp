#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<int> prices(n);
    for(int i = 0; i < n; ++i) {
        cin >> prices[i];
    }
    
    sort(prices.begin(), prices.end());
    
    int max_earnings = 0;
    for(int i = 0; i < m; ++i) {
        if(prices[i] < 0) {
            max_earnings -= prices[i];
        }
        else {
            break;
        }
    }
    
    cout << max_earnings << endl;
    
    return 0;
}
