class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size();

        while (left < right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] == target) {
                return mid;
            }

            if (nums[mid] > nums[left]) {
                if (nums[left] <= target && target < nums[mid]) {
                    right = mid;
                } else {
                    left = mid + 1;
                }
            } else {
                if (nums[right - 1] >= target && nums[mid] < target) {
                    left = mid + 1;
                } else {
                    right = mid;
                }
            }
        }

        return -1;
        
    }
};

