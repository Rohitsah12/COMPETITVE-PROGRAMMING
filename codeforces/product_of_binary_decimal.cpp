#include <iostream>
#include <cmath>
using namespace std;

bool is_binary_decimal(int num) {
    while (num > 0) {
        int digit = num % 10;
        if (digit != 0 && digit != 1)
            return false;
        num /= 10;
    }
    return true;
}

string can_be_product_of_binary_decimals(int n) {
    if (n == 1)
        return "YES";

    for (int i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            if (is_binary_decimal(i) && is_binary_decimal(n / i))
                return "YES";
        }
    }
    return "NO";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << can_be_product_of_binary_decimals(n) << endl;
    }
    return 0;
}
