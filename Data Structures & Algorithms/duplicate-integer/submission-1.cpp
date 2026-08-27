class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> unq;
        for (int num : nums) {
            if (unq.contains(num)) return true;
            unq.insert(num);
        }
        return false;
    }
};