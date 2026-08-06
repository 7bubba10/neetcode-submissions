class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> seen;
        std::sort(nums.begin(), nums.end());
        for (int num : nums){
            

            if (seen.count(num)) {
                return true;
            }

            seen.insert(num);

        }
        return false;
    }
};