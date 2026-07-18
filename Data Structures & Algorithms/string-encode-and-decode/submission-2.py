class Solution:

    def encode(self, strs: List[str]) -> str:
        s = []
        for i in strs:
            s.append(str(len(i)))
            s.append("#")
            s.append(i)
        return "".join(s)

    def decode(self, s: str) -> List[str]:
        l = []
        i = 0
        n = len(s)
        while i < n:
            j = i
            sl = ""
            while s[j] != "#":
                sl += s[j]
                j += 1
            sl = int(sl)
            i = j + 1
            l.append(s[i : i + sl])
            i += sl 
        return l
