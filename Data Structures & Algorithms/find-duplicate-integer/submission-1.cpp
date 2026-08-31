class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> s;

        for (int num:nums) {
            if (auto [it,inserted] = s.insert(num); !inserted) {
                return *it;
            }
        }
    }
};
