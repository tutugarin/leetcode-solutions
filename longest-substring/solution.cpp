class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLen = 0;
        map<char, int> valueToIndex;
        int start = 0;
        for (int i = 0; i < s.size(); ++i) {
            if (valueToIndex.find(s[i]) == valueToIndex.end()) {
                valueToIndex[s[i]] = i;
                maxLen = max(maxLen, i - start + 1);
            } else {
                if (valueToIndex[s[i]] >= start) {
                    start = valueToIndex[s[i]] + 1;
                }
                valueToIndex[s[i]] = i;
                maxLen = max(maxLen, i - start + 1);
            }
        }
        return maxLen; 
    }
};

