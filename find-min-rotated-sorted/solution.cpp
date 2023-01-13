class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0;
        int r = nums.size();
        int minElem = INT_MAX;

        while (l < r) {
            int mid = l + (r - l) / 2;

            minElem = min(minElem, nums[mid]);

            if (nums[mid] <= nums[r - 1]) {
                r = mid;
            } else {
                l = mid + 1;
            }
        }

        return minElem;
        
    }
};

