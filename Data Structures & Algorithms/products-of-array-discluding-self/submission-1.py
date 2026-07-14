class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        l=[]
        for i in range(len(nums)):
            pre = 1
            suf = 1
            for j in range(i):
                pre = pre * nums[j]
            for j in range(i+1,len(nums)):
                suf = suf * nums[j]
            l.append(pre * suf)
        return l
        