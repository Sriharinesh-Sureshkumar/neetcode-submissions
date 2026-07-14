class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        l = []
        for i in strs:
            count = {}
            for ch in i:
                count[ch] = count.get(ch, 0) + 1
            l.append(count)
        L = []
        for i in range(len(l)):
            temp = []
            t = [word for row in L for word in row]
            if strs[i] not in t:
                temp.append(strs[i])
                for j in range(i + 1,len(l)):
                    if l[i] == l[j]:
                        temp.append(strs[j])
                L.append(temp)
        return L


