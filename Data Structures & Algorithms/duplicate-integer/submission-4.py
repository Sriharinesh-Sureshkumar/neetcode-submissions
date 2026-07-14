from collections import Counter
class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        freq = Counter(nums)
        for i in freq.values():
            if i > 1:
                return True
        return False