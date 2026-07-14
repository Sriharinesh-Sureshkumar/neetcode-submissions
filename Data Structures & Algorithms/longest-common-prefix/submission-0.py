class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        prefix = strs[0]
        for s in strs[1:]:
            while s[:len(prefix)] != prefix:
                prefix = prefix[:-1]
            if not prefix:
                return ""
        return prefix
            

        
        