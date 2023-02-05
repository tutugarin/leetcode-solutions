class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        p1 = 0
        p2 = 0
        while (p1 < len(nums)):
            if nums[p1] == 0:
                p1 += 1
            else:
                nums[p1], nums[p2] = nums[p2], nums[p1]
                p1 += 1
                p2 += 1
