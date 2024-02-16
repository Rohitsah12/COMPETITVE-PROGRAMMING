#include <stdio.h>

int main(void) {
    int t, n;
    scanf("%d", &t);
    
    for(int i = 1; i <= t; i++) {
        scanf("%d", &n);
        int p = n * 50;  // Total income
        
        // Calculate individual costs
        int cost_sugarcane = p * 0.20;
        int cost_salt_mint = p * 0.20;
        int cost_rent = p * 0.30;
        
        // Calculate total cost
        int total_cost = cost_sugarcane + cost_salt_mint + cost_rent;
        
        // Calculate profit
        int profit = p - total_cost;
        
        printf("%d\n", profit);
    }
    return 0;
}


