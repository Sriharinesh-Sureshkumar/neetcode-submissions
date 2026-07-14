class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        l = 0
        for i in range(len(nums)):
            count = 1
            curr = nums[i]
            if curr - 1 not in nums:
                while curr + 1 in nums:
                    curr+=1
                    count+=1
            l = max(count,l)
        return l


