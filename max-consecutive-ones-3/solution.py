class Solution:
    def longestOnes(self, nums: List[int], k: int) -> int:
        count = k
        i, j = 0, 0
        answer = 0
        while j < len(nums) and i < len(nums):
            if nums[j] == 1:
                j += 1
            else:
                if count != 0:
                    count -= 1
                    j += 1
                else:
                    if nums[i] == 1:
                        i += 1
                    else:
                        count += 1
                        i += 1
                    continue
            answer = max(j - i, answer)
        return answer
                
        
