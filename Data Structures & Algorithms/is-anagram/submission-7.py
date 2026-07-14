class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        sf = {}
        for i in s:
            sf[i] = sf.get(i, 0) + 1
        tf = {}
        for i in t:
            tf[i] = tf.get(i, 0) + 1
        return sf == tf