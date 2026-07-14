class Solution:

    def encode(self, strs: List[str]) -> str:
        s = ""
        for i in strs:
            s = s + str(len(i)) + "#" + i
        return s

    def decode(self, s: str) -> List[str]:
        l = []
        i = 0
        while i < len(s):
            j=i
            while s[j] != '#':
                j+=1
            length = int(s[i:j])
            word = s[j+1:j+1+length]
            l.append(word)
            i=j+1+length
        return l

            
            
            

