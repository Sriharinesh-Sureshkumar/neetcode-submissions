class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        x = {}
        for i in range(len(nums)):
            diff = target - nums[i]
            if diff in x :
                return [x[diff] , i]
            else:
                x[nums[i]] = i