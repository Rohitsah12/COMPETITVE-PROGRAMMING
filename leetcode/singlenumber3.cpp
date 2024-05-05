//Rohit Kumar sah
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;

        for(auto c : nums) {
            ans ^= c;
        }
        int position = 0;
        for (int i = 0; i < 32; i++) {
            if (ans & (1 << i)) {
                position = i + 1;
                break;
            }
        }
        int a = 0, b = 0;
        for (auto c : nums) {
            if (c & (1 << (position - 1))) {
                a ^= c;
            } else {
                b ^= c;
            }
        }
        
        return {a, b};
    }
};
