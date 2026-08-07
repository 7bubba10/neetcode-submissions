class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> interSet;
        unordered_set<int> intersections;

        for (int i = 0; i < nums1.size(); i++) {
            interSet.insert(nums1[i]);
        }

        for (int i =0; i < nums2.size(); i++) {
            if (interSet.count(nums2[i])) {
                intersections.insert(nums2[i]);
            }
        }

        return vector<int>(intersections.begin(), intersections.end());
        
        
    }
};