class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        sf = {}
        for i in s:
            if i in sf:
                sf[i] += 1
            else:
                sf[i] = 1
        tf = {}
        for i in t:
            if i in tf:
                tf[i] += 1
            else:
                tf[i] = 1
        return sf == tf