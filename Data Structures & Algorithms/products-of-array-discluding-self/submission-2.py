class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        n = len(nums)
        pre = [1] * n 
        suf = [1] * n
        for i in range(1, n):
            pre[i] *= pre[i - 1] * nums[i - 1]
        for i in range(n - 2, -1, -1):
            suf[i] *= suf[i + 1] * nums[i + 1]
        ans = [1] * n
        for i in range(n):
            ans[i] = pre[i] * suf[i]
        return ans 
