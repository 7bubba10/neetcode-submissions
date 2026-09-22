class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> se;
        int l = 0;
        int length = 0; 

        for (int r = 0; r < s.size(); r++) {
            

            while (se.contains(s[r])) {
                se.erase(s[l]);
                l++;
            }
            se.insert(s[r]);
            length = max(length,r - l + 1);
        }
        return length;
    }
};
