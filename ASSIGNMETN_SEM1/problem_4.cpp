#include<bits/stdc++.h>
using namespace std;

int modularExponentiation(int a, int b, int m) {
    int result = 1;
    a = a % m; 

    while (b > 0) {
  
        if (b & 1)
            result = (result * a) % m;

      
        b = b >> 1; 
        a = (a * a) % m;
    }
    return result;
}

int main() {
    int a, b, m;
    cin >> a >> b >> m;
    cout << modularExponentiation(a, b, m) << endl;
    return 0;
}
