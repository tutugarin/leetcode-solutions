class Solution {
public:
    void solution(map<int, int>& dict,  vector<vector<int>>& answer,
                                vector<int>& vec, int sz) {
        if (vec.size() == sz) {
            answer.push_back(vec);
            return;
        }
        for (const auto& [key, value] : dict) {
            if (value != 0) {
                vec.push_back(key);
                dict[key] -= 1;
                solution(dict, answer, vec, sz);
                vec.pop_back();
                dict[key] += 1;
            }

        }

    };
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        map<int, int> dict;
        for (int i = 0; i < nums.size(); ++i) {
            dict[nums[i]] += 1;
        }
        vector<vector<int>> ans;
        vector<int> vec;
        solution(dict, ans, vec, nums.size());
        return ans;
    }
};

