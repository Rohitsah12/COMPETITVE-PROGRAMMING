#include <iostream>
#include <bits/stdc++.h>
typedef long long int ll;
#define endl "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()
const int inf = 1e9 + 10;
const int M = 1e9 + 7;
using namespace std;

// Function to calculate the initial array and its sum
pair<vector<int>, int> calc(int n) {
    vector<int> arr;
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += abs(i - (n - i + 1));
        arr.push_back(i);
    }
    return {arr, sum};
}

// Function to determine if rearrangement is possible and perform the rearrangement
bool rearr(vector<int>& arr, int n, int& k) {
    int ind = 0;
    int size = n;

    while (k > (size - 1) * 2) {
        swap(arr[ind], arr[n - ind - 1]);
        k -= (size - 1) * 2;
        size -= 2;
        ind++;
    }

    if (k % 2 == 1 || k > 2 * (size - 1)) {
        return false; 
    }
    
    k /= 2;
    swap(arr[ind], arr[ind + k]);
    return true; 
}

// Function to handle each test case
void solveTestCase() {
    int n, k;
    cin >> n >> k;

    auto result = calc(n);
    vector<int>& arr = result.first;
    int sum = result.second;
    
    if (k % 2 == 1 || sum < k) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
        if (rearr(arr, n, k)) {
            for (auto num : arr) {
                cout << num << " ";
            }
            cout << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}

// Main function to handle multiple test cases
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solveTestCase();
    }
    return 0;
}
