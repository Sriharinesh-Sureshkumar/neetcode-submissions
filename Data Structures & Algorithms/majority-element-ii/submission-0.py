class Solution:
    def majorityElement(self, nums: List[int]) -> List[int]:
        can1, can2, c1, c2 = nums[0], nums[0], 0, 0
        for n in nums:
            if n == can1:
                c1 += 1
            elif n == can2:
                c2 += 1
            elif c1 == 0:
                can1 = n
                c1 = 1
            elif c2 == 0:
                can2 = n
                c2 = 1
            else:
                c1 -= 1
                c2 -= 1
        cnt1, cnt2 = 0, 0
        for n in nums:      
            if can1 == n:
                cnt1 += 1
            elif can2 == n:
                cnt2 += 1
        ans = []
        n = len(nums) // 3
        if cnt1 > n:
            ans.append(can1)
        if cnt2 > n:
            ans.append(can2)
        return ans