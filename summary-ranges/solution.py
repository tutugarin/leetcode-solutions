class Solution:
    def summaryRanges(self, nums: List[int]) -> List[str]:
        ans = []
        if (len(nums) == 0):
            return ans
        string = str(nums[0])
        count = 0
        for i in range(0, len(nums)):
            if i == len(nums) - 1 or nums[i] + 1 != nums[i+1]:
                if (count == 0):
                    ans.append(string)
                else:
                    string += "->" + str(nums[i])
                    ans.append(string) 
                if i != len(nums) - 1:
                    string = str(nums[i + 1]) 
                count = 0
            else:
                count += 1 
        return ans
        
