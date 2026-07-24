class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:
        pre_sum = {0 : 1}
        cnt = 0
        psum = 0
        for n in nums:
            psum += n
            cnt += pre_sum.get(psum - k, 0)
            pre_sum[psum] = pre_sum.get(psum, 0) + 1
        return cnt