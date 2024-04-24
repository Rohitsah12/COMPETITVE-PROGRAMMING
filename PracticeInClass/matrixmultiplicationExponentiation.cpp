#include <vector>
using namespace std;
typedef vector<vector<int>> Matrix;
Matrix matrix_multiply(const Matrix& A, const Matrix& B) {
    int n = A.size();
    Matrix C(n, vector<int>(n, 0));
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            for (int k = 0; k < n; ++k)
                C[i][j] += A[i][k] * B[k][j];
    return C;
}
Matrix matrix_power_smart(const Matrix& A, int x) {
    int n = A.size();
    Matrix result(n, vector<int>(n, 0));
    Matrix cur_a = A;
    for (; x > 0; x >>= 1) {
        if (x & 1)
            result = matrix_multiply(result, cur_a);
        cur_a = matrix_multiply(cur_a, cur_a);
    }
    return result;
}
Matrix matrix_power_final(const Matrix& A, int x) {
    int n = A.size();
    Matrix result(n, vector<int>(n, 0));
    for (int i = 0; i < n; ++i)
        result[i][i] = 1;  

    while (x > 0) {
        if (x % 2 == 1)
            result = matrix_multiply(result, A);
        A = matrix_multiply(A, A);
        x /= 2;
    }
    return result;
}