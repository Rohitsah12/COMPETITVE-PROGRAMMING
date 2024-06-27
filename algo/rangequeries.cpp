//prefix sum basic
//------------------------------------------------------------------------------------------------------------------------------

vector<int> findPrefixSums(const vector<int>& a) {
    int n = a.size();
    vector<int> prefixSums(n + 1, 0);
    for (int i = 0; i < n; i++) {
        prefixSums[i + 1] = prefixSums[i] + a[i];
    }
    return prefixSums;
}
//prefix sum struct 
//--------------------------------------------------------------------------------------------------------------------------------
struct SegmentSumStructure {
    vector<int> prefixSums;
 
    SegmentSumStructure(const vector<int>& a) {
        int n = a.size();
        prefixSums.assign(n + 1, 0);
        for (int i = 0; i < n; i++) {
            prefixSums[i + 1] = prefixSums[i] + a[i];
        }
    }
 
    int findSum(int left, int right) { // [left; right)
        return prefixSums[right] - prefixSums[left];
    }
 
};

//prefix sum 2d iterative
//------------------------------------------------------------------------------------------------------------------------------------------------------
#include <bits/stdc++.h>
 
using namespace std;
 
vector<int> findPrefixSums(vector<int>& a) {
    int n = a.size();
    vector<int> prefixSums(n + 1, 0);
    for (int i = 0; i < n; i++) {
        prefixSums[i + 1] = prefixSums[i] + a[i];
    }
    return prefixSums;
}
 
vector<vector<int>> findPrefixSums2D(vector<vector<int>>& a) {
    int n = a.size();
    int m = a[0].size();
    vector<vector<int>> prefixSum1D(n);
    for (int i = 0; i < n; i++) {
        prefixSum1D[i] = findPrefixSums(a[i]);
    }
    vector<vector<int>> prefixSum2D(n + 1, vector<int>(m + 1, 0));
    for (int j = 0; j <= m; j++) {
        for (int i = 0; i < n; i++) {
            prefixSum2D[i + 1][j] = prefixSum2D[i][j] + prefixSum1D[i][j];
        }
    }
    return prefixSum2D;
}
 
int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> arr(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    vector<vector<int>> prefixSums = findPrefixSums2D(arr);
    int queriesNumber;
    cin >> queriesNumber;
    for (int i = 0; i < queriesNumber; i++) {
        int lx, ly, rx, ry;
        cin >> lx >> ly >> rx >> ry;
        lx--;
        ly--;
        cout << prefixSums[rx][ry] - prefixSums[lx][ry] - prefixSums[rx][ly] + prefixSums[lx][ly] << '\n';
    }
}

//prefix sum 2d recurrent
//_------------------------------------------------------------------------------------------------------------------------------

vector<vector<int>> findPrefixSums2D(vector<vector<int>>& a) {
    int n = a.size();
    int m = a[0].size();
    vector<vector<int>> prefixSum(n + 1, vector<int>(m + 1, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            prefixSum[i + 1][j + 1] = prefixSum[i][j + 1]
                + prefixSum[i + 1][j] - prefixSum[i][j] + a[i][j];
        }
    }
    return prefixSum;
}