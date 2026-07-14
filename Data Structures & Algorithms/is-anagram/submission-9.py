class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t): return False
        f = [0] * 26
        for c in s:
            f[ord(c) - ord('a')] += 1
        for c in t:
            f[ord(c) - ord('a')] -= 1
            if f[ord(c) - ord('a')] < 0: return False
        return True