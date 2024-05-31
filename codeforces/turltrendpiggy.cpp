#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int l, r;
        cin >> l >> r;
        int maxPower = 0;
        for (int i = 1; ; i++) {
            int power =  pow(2,i);  
            if (power > r) break;
            if (power >= l) maxPower = i;
    }
    cout<<maxPower<<endl;
    }
    return 0;
}
