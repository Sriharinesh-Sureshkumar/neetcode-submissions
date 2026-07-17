from collections import Counter
class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        freq = Counter(nums)
        n = len(nums)
        a = [[] for _ in range(n)]
        for i in freq:
            a[freq[i] - 1].append(i)
        ans = []
        for i in range(n - 1, -1, -1):
            if a[i]:
                for j in a[i]:
                    ans.append(j)
                    k -= 1
            if k == 0:
                return ans
        return ans
