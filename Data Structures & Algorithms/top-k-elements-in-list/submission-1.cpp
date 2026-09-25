class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        vector<int> results;

        for (int i = 0; i < nums.size(); i++) {
            m[nums[i]]++;
        }

        vector<vector<int>> buckets(nums.size() + 1);
        for (auto& [num,freq] : m) {
            buckets[freq].push_back(num);
        }

        for (int j = buckets.size() - 1; j > 0; j--) {
            for (int n : buckets[j]) {
                results.push_back(n);
                if (results.size() == k) return results;
            }
        }
    }
};
