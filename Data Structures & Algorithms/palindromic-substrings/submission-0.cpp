class Solution {
public:
    int expand(string s, int l, int r) {
        int res = 0;
        while (l >= 0 && r < s.size() && s[l] == s[r]){
            l--;
            r++;
            res++;
        }
        return res;
    }

    int countSubstrings(string s) {
        int res = 0;
        for (int i = 0; i < s.size(); i++) {
            res += expand(s,i,i);
            res += expand(s,i,i + 1);
        }
        return res;
    }
};
