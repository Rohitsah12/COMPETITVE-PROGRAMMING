#include <vector>
using namespace std;

//sieve

 vector<int> sieve(N, 1);
    sieve[0] = sieve[1] = 0; 

    for(int i = 2; i * i < N; i++) {
        if(sieve[i]) {
            for(int j = i * i; j < N; j += i) {
                sieve[j] = 0; 
            }
        }
}


//smallest prime factors

 // Create an spf (smallest prime factor) array
    vector<int> spf(N);

    // Initialize the spf array: initially, each number is its own smallest prime factor
    for(int i = 2; i < N; i++) {
        spf[i] = i;
    }

    // Process using the SPF logic
    for(int i = 2; i * i < N; i++) {
        if(spf[i] == i) {  // i is prime
            for(int j = i * i; j < N; j += i) {
                if(spf[j] == j) {  // If j has not been marked yet
                    spf[j] = i;  // Mark i as the smallest prime factor of j
                }
            }
        }
    }

 //prime factor trial division


 vector<int> factor(int n) {
    vector<int> facts;
    for (long long d = 2; d * d <= n; d++) {
        while (n % d == 0) {
            facts.push_back(d);
            n /= d;
        }
    }
    if (n > 1) {
        facts.push_back(n);
    }
    return facts;
}
