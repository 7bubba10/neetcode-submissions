class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        vector<int> results;

        for (int num : nums) {
            m[num]++;
        }

        vector<vector<int>> buckets(nums.size() + 1);
        for (auto [k,v] : m) {
            buckets[v].push_back(k);
        }

        for (int i = buckets.size() - 1; i > 0; i--) {
            for (int j : buckets[i]) {
                results.push_back(j);
                if (results.size() == k) return results;
            }
        }   
    }
};
