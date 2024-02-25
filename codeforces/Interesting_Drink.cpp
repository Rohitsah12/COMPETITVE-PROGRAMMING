#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>& prices, int budget) {
    int low = 0, high = prices.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (prices[mid] <= budget) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return low;
}

vector<int> countShops(int n, vector<int>& prices, int q, vector<int>& budgets) {
    vector<int> results;
    
    sort(prices.begin(), prices.end()); 
    
    for (int budget : budgets) {
        int count = binarySearch(prices, budget);
        results.push_back(count);
    }
    
    return results;
}

int main() {
    int n, q;
    cin >> n;
    vector<int> prices(n);
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }
    cin >> q;
    vector<int> budgets(q);
    for (int i = 0; i < q; i++) {
        cin >> budgets[i];
    }
    
    vector<int> results = countShops(n, prices, q, budgets);
    
    for (int result : results) {
        cout << result << endl;
    }
    
    return 0;
}
