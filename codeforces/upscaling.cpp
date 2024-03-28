#include <iostream>
#include <vector>
using namespace std;

vector<string> checkerboard(int n) {
    vector<string> board(2*n, string(2*n, ' '));
    for(int i = 0; i < 2*n; ++i) {
        for(int j = 0; j < 2*n; ++j) {
            if((i + j) % 2 == 0 && (i+1)%2!=0)
                board[i][j] = '#';
            else
                board[i][j] = '.';
        }
    }
    return board;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<string> result = checkerboard(n);
        for(const string& row : result)
            cout << row << endl;
    }
    return 0;
}
