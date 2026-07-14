from collections import Counter
class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        sf = Counter(s)
        tf = Counter(t)
        return sf == tf