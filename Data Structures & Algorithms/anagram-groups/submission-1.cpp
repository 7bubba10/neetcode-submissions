class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m;
        vector<vector<string>> results;

        for (string str : strs) {
            string copy = str;
            sort(copy.begin(), copy.end());

            m[copy].push_back(str);
        }

        for (auto [k,v] : m) {
            results.push_back(v);
        }
        return results;
    }
};
