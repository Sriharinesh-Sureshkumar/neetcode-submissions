class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        x = {}
        for i,v in enumerate(nums):
            diff = target - v
            if diff in x:
                return [x[diff] , i]
            x[v] = i
