class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<int>suffixmax(n);
        suffixmax[n-1]=prices[n-1];
        for(int i=n-2;i>=0;i--){
            suffixmax[i]=max(suffixmax[i+1],prices[i]);
        }
        int profit=0;
        for(int i=0;i<n-1;i++){
           profit=max(profit,suffixmax[i+1]-prices[i]); 
        }
        return profit;
    }
};