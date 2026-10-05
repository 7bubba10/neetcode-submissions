class Solution {
public:
    bool isSubsequence(string s, string t) {
        queue<char> q;

        for (char c : s) {
            q.push(c);
        }

        for (int i = 0; i < t.size(); i++) {
            char front = q.front();

            if (t[i] == front) {
                q.pop();
            }
        }

        if (q.empty()) {
            return true;
        }
        else {
            return false;
        }
    }
};