class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int prev = -11;
        int last_start = 0;
        vector<vector<int>> answer = {{}};

        for (int i = 0; i < nums.size(); ++i) {
            int sz = answer.size();
            if (nums[i] == prev) {
                int cp = last_start;
                last_start = answer.size();
                for (int k = cp; k < sz; ++k) {
                    auto tmp = answer[k];
                    tmp.push_back(nums[i]);
                    answer.push_back(tmp);
                }
            } else {
                last_start = answer.size();
                for (int j = 0; j < sz; ++j) {
                    auto tmp = answer[j];
                    tmp.push_back(nums[i]);
                    answer.push_back(tmp);
                }
            }
            prev = nums[i];
        }
        return answer;
    }
};

