class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> sub;
        int size = 0;
        int l = 0;

        for (int r = 0; r < s.size(); r++) {
            while (sub.contains(s[r])) {
                sub.erase(s[l]);
                l++;
            }

            sub.insert(s[r]);
            size = max(size, r - l + 1);

        }
        return size;
    }
};
