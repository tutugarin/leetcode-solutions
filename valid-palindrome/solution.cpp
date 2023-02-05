class Solution {
public:
    bool isPalindrome(string s) {
        int start = 0, end = s.size() - 1;
        while (start < end) {
            while (start < s.size() && !iswalnum(tolower(s[start]))) {
                ++start;   
            }
            while (end > 0 && !iswalnum(tolower(s[end]))) {
                --end;   
            }
            if (start < s.size() && end >= 0 && tolower(s[start]) != tolower(s[end])) {
                return false;
            } else {
                ++start;
                --end;
            }
        }
        
        return true;
    }
};
