class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> mySet(nums.begin(),nums.end());
        int results = 0;

        for (int n : mySet){
            if (mySet.find(n - 1) == mySet.end()){
                int length = 1;

                while (mySet.find(n + length) != mySet.end()){
                    length++;
                }
                results = max(results,length);
            }
        }
        return results;
    }
};
