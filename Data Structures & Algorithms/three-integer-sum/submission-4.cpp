class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int l = 0;
        vector<vector<int>> results;

        while (l < (int)nums.size() - 2) {
            if (l > 0 && nums[l] == nums[l - 1]) {
                l++;
                continue;
            }

            int r = nums.size() - 1;
            int m = l + 1;

            while (m < r) {
                int sum = nums[l] + nums[m] + nums[r];
                if (sum == 0) {
                    results.push_back({nums[l],nums[m],nums[r]});
                    while (m < r && nums[m] == nums[m + 1]) m++;
                    while (m < r && nums[r] == nums[r - 1]) r--;
                    r--;
                }
                else if (sum < 0) {
                    m++;
                }
                else {
                    r--;
                }
            }
            l++;
        }
        return results;

    }
};
