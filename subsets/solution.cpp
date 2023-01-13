/ // тупое решение
// class Solution {
// public:
//     vector<vector<int>> subsets(vector<int>& nums) {
//         vector<vector<int>> answer = {{}};
//         int prev_size = answer.size();
//         for (int i = 0; i < nums.size(); ++i) {
//             for (int j = 0; j < prev_size; ++j) {
//                 auto tmp = answer[j];
//                 tmp.push_back(nums[i]);
//                 answer.push_back(tmp);
//             }
//             prev_size = answer.size();
//         }
//         return answer;
//     }
// };

// рекурсивное, как оказалось быстрее на 30%
class Solution {
public:
    void solve(vector<vector<int>>& ans, int i, vector<int>&v, vector<int>&nums){
        if (i >= nums.size()){
            ans.push_back(v);
            return;
        }
        
        v.push_back(nums[i]);
        solve(ans, i+1, v, nums);
        v.pop_back();
        solve(ans, i+1, v, nums);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> answer = {};
        vector<int> vec;
        solve(answer, 0, vec, nums);
        return answer;
    }
};

