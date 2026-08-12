class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;
        
        for (int num : nums) {
            ans.push_back(num);
        }

        ans.insert(ans.end(), nums.begin(), nums.end());

        return ans;
    }
};