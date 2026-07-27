class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        i = 0
        j = 0
        w1n = len(word1)
        w2n = len(word2)
        ans = []
        while i < w1n and j < w2n:
            ans.append(word1[i])
            ans.append(word2[j])
            i += 1
            j += 1
        ans.extend(word1[i:])
        ans.extend(word2[j:])
        return "".join(ans)