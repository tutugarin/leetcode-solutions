class Solution {
public:
    int longestSubstring(string s, int k) {
        map<char, int> dict;

        for (const char& letter : s) {
            dict[letter] += 1;
        }

        int numberUnique = dict.size();
        int answer = 0;

        for (int i = 1; i <= numberUnique; ++i) {
            int countK = 0;
            int numUnique = 0;
            int left = 0, right = 0;

            map<char, int> dictTmp;

            while (right < s.size()) {
                if (numUnique <= i) {
                    if (dictTmp[s[right]] == 0) {
                        ++numUnique;
                    }
                    dictTmp[s[right]] += 1;


                    if (dictTmp[s[right]] == k) {
                        ++countK;
                    }
                    ++right;
                } else {
                    if (dictTmp[s[left]] == k) {
                        --countK;
                    }
                    dictTmp[s[left]] -= 1;
                    if (dictTmp[s[left]] == 0) {
                        --numUnique;
                    }
                    ++left;
                }

                if (numUnique == i && countK == i) {
                    answer = max(answer, right - left);
                }
            }
        }
        return answer;

    }
};

