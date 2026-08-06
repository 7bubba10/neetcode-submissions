class Solution {
public:
    vector<int> anagramMappings(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> map;
        vector<int> results;
        
        for (int i = 0; i < nums2.size(); i++){
            map[nums2[i]] = i;
        }

        for (int num : nums1){
            results.push_back(map[num]);
        }

        return results;
    }
};
