class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> map;
        vector<vector<string>> results; 
        for (auto& str : strs) {
            string sorted = str;
            sort(sorted.begin(), sorted.end());
            map[sorted].push_back(str);
            
        }
        for (auto& pair : map) {
            results.push_back(pair.second);
        }
        return results;
    }
};
