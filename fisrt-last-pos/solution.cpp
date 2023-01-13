class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size();

        vector<int> answer = {-1, -1};
        while (left < right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] == target) {
                if (answer[0] == -1 || answer[0] > mid) {
                    answer[0] = mid;
                }
               right = mid;
            } else if (nums[mid] > target) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }
        


        left = 0;
        right = nums.size();
        while (left < right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] == target) {
                if (answer[1] == -1 || answer[1] < mid) {
                    answer[1] = mid;
                }
               left = mid + 1;
            } else if (nums[mid] > target) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }
        return answer;
    }
};

