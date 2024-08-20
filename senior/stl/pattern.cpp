#include <iostream>
using namespace std;

int main() {
    int n = 6; 

    int start = 1;
    int end = n * (n + 1) / 2; 

    for (int i = 1; i <= n; i++) {
        int left = start;
        int right = end;
        for (int j = 1; j <= i; j++) {
            if (j % 2 != 0) {
                cout << left << " ";
                left++;
            } else {
                cout << right << " ";
                right--;
            }
        }
        cout << endl;
        start += i;    
        end -= (i + 1); 
    }

    return 0;
}
