from collections import defaultdict
class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        d = defaultdict(list)
        for i in strs:
            x = "".join(sorted(i))
            d[x].append(i)
        return list(d.values())