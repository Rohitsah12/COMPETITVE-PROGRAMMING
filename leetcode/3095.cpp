class Solution {
public:
    int minimumSubarrayLength(vector<int>& nums, int k) {
        int n = nums.size();
    int minLen = INT_MAX;

    for (int start = 0; start < n; ++start) {
        int curOr = 0;
        for (int end = start; end < n; ++end) {
            curOr |= nums[end];
            if (curOr >= k) {
                minLen = min(minLen, end - start + 1);
                break;
            }
        }
    }

    return minLen == INT_MAX ? -1 : minLen;

        
    }
};