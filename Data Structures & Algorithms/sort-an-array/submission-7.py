class Solution:
    def sortArray(self, nums: List[int]) -> List[int]:
        t = [0] * len(nums)
        def msort(low, high):
            if low >= high:
                return
            mid = low + (high - low) // 2
            msort(low, mid)
            msort(mid + 1, high)
            if nums[mid] <= nums[mid + 1]:
                return
            merge(low, mid, high)
        def merge(low, mid, high):
            left = k = low
            right = mid + 1
            while left <= mid and right <= high:
                if nums[left] <= nums[right]:
                    t[k] = nums[left]
                    left += 1
                else:
                    t[k] = nums[right]
                    right += 1
                k += 1
            while left <= mid:
                t[k] = nums[left]
                left += 1
                k += 1
            while right <= high:
                t[k] = nums[right]
                right += 1
                k += 1
            nums[low : high + 1] = t[low : high + 1]
        msort(0, len(nums) - 1)
        return nums