class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.size() == 0) {
            return false;
        }

        int l = 0;
        int r = matrix.size() * matrix[0].size();

        while (l < r) {
            int mid = l + (r - l) / 2;
            int row = mid / matrix[0].size();
            int column = mid % (matrix[0].size());

            if (matrix[row][column] == target) {
                return true;
            } else if (matrix[row][column] > target) {
                r = mid;
            } else {
                l = mid + 1;
            }
        }
        return false;
    }
};

