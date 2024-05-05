#include<bits/stdc++.h>
using namespace std;

void streamStatistics(vector<int>& nums) {
    int min_val = INT_MAX, max_val = INT_MIN, sum = 0;
    double average;
    int mode;

    for (int num : nums) {
        min_val = min(min_val, num);
        max_val = max(max_val, num);
        sum += num;
    }
    
    average = (double)sum / nums.size();

    cout << "min: " << min_val << ", max: " << max_val << ", sum: " << sum << ", average: " << average << endl;
}

int main() {
    int n;
    cin >> n;
    
    vector<int> nums;
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        nums.push_back(num);
        streamStatistics(nums);
    }

    return 0;
}
