#include <iostream>

long long calculate_f(long long n) {
    if (n % 2 == 0) {
        return n / 2;
    } else {
        return -(n + 1) / 2;
    }
}

int main() {
    // Input
    long long n;
    std::cin >> n;
    long long result = calculate_f(n);


    std::cout << result << std::endl;

    return 0;
}
