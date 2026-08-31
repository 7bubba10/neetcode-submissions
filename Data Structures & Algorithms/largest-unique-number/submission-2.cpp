class Solution {
public:
    int largestUniqueNumber(vector<int>& nums) {
        unordered_map<int,int> unqMap;
        int highestUnq = -1;

        for (int num : nums) {
            unqMap[num]++;
        }

        for (const auto& [num,freq] : unqMap) {
            if (freq == 1 && num > highestUnq) highestUnq = num;
        }

        return highestUnq;

        
    }
};
