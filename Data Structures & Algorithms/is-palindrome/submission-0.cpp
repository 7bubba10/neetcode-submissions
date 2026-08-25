class Solution {
public:
    bool isPalindrome(string s) {
        
        string filtered = "";
        for (char c : s) {
            if (isalnum(c)) filtered += tolower(c);
        }

        int front = 0;
        int back = filtered.size() -1;
        
        while (front <= back) {
            if (filtered[front] != filtered[back]) {
                return false;
                
            }
            front++;
            back--;
        }
        return true;
        
    }
};
