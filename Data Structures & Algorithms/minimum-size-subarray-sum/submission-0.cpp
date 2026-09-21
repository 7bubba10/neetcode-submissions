class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l = 0;
        int total = 0;
        int length = INT_MAX;

        for (int r = 0; r < nums.size(); r++) {
            total += nums[r];
            while (total >= target) {
                length = min(r - l + 1, length);
                total -= nums[l];
                l++;
            }
        }
        if (length == INT_MAX) return 0;
        return length;
    }
};