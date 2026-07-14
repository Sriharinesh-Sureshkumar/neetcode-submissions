class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        l = []
        for i in range(len(nums)):
            if nums[i] in l:
                return True
            l.append(nums[i])
        return False

