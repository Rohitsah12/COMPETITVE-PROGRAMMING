#include <iostream>
#include <cmath>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int r;
        std::cin >> r;
        
        // Calculate the number of lattice points inside the circle with radius r+1
        long long points_r_plus_1 = (long long)(r + 1) * (r + 1);
        
        // Calculate the number of lattice points inside the circle with radius r
        long long points_r = (long long)r * r;
        
        // Calculate the number of lattice points strictly between the two circles
        // by subtracting the number of lattice points inside the circle with radius r from the number of lattice points inside the circle with radius r+1
        long long lattice_points = points_r_plus_1 - points_r;
        
        std::cout << lattice_points << std::endl;
    }
    return 0;
}
