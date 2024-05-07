class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
       if(k==n){
        for(auto c:nums){
            cout<<c<<" ";
        }
       }
       else if(k>n) k=k%n;
        reverse(nums.begin(),nums.end()-k);
        reverse(nums.end()-k,nums.end());
        reverse (nums.begin(),nums.end());
        for(auto c:nums){
            cout<<c<<" ";
        }
        

    }
};