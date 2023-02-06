lass Solution {
public:
    int longestSubarray(vector<int>& nums) {
        bool first = true;
        int count = 0, answer = 0, prev = 0;
        for (const auto& number : nums) {
            if (number == 1) {
                count += 1;
                first = true;
            } else {

                if (first) {
                    first = false;
                    answer = max(answer, count);
                    count = count - prev;
                    prev = count;
                } else {
                    count = 0;
                    prev = 0;
                }
            }
        }
        if (count == nums.size()) {
            return count - 1;
        }
        return max(count, answer);
        
    }
};
