class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        candidate = None
        c = 0
        for n in nums:
            if c == 0:
                candidate = n
            if n == candidate:
                c += 1
            else:
                c -= 1
        return candidate