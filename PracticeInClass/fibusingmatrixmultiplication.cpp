#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> matrixmultiplication(vector<vector<int>>& matA, vector<vector<int>>& matB) {
    int n = matA.size();
    int m = matA[0].size();
    int q = matB.size();
    int p = matB[0].size();
    if (m != q) {
        cout << "Matrix multiplication not possible" << endl;
        return {};
    }
    vector<vector<int>> result(n, vector<int>(p, 0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < p; ++j) {
            for (int k = 0; k < m; ++k) {
                result[i][j] += matA[i][k] * matB[k][j];
            }
        }
    }
    return result;
}
vector<vector<int>> power(vector<vector<int>>& A, int n) {
    if (n == 0) {
        return {{1, 0}, {0, 1}};
    }
    if (n == 1) {
        return A;
    }
    vector<vector<int>> temp = power(A, n / 2);
    temp = matrixmultiplication(temp, temp);
    if (n % 2 == 1) {
        temp = matrixmultiplication(temp, A);
    }
    return temp;
}

int main() {
    vector<vector<int>> arr = {{1, 1}, {1, 0}};
    int n;
    cin >> n;
    vector<vector<int>> matrix = power(arr, n - 1);
    int fib0 = 0;
    int fib1 = 1;
    int fibN = matrix[0][0] * fib1 + matrix[0][1] * fib0;
    cout <<fibN << endl;
    return 0;
}
