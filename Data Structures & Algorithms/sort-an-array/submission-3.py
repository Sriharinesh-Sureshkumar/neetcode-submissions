class Solution:
    def sortArray(self, nums: List[int]) -> List[int]:
        n = len(nums)
        for i in range(n):
            min_ele = nums[i]
            idx = i
            for j in range(i + 1, n):
                if min_ele > nums[j]:
                    min_ele = nums[j]
                    idx = j
            if idx != i:
                nums[i], nums[idx] = nums[idx], nums[i]
        return nums