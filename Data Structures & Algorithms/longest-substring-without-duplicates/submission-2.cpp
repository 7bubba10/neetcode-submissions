class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0;
        int r = 0;
        int size = 0;
        unordered_set<char> seen;

        while (r < s.size()) {
            while (seen.contains(s[r])) {
                seen.erase(s[l]);
                l++;
            }
            seen.insert(s[r]);
            size = max(size, (r - l) + 1);
            r++;
        }
        return size;

    }
};
