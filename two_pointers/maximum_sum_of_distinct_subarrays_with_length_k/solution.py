from typing import List

class Solution:
    def maximumSubarraySum(self, nums: List[int], k: int) -> int:
        m = {}
        o = 0

        left = 0
        curr_sum = 0

        for right in range(len(nums)):
            if len(m) >= k:
                # window is full, need to remove the leftmost element
                curr_sum -= nums[left]
                del m[nums[left]]
                left += 1
            
            if nums[right] in m:
                # current element is in the window
                j = m[nums[right]]
                while left <= j:
                    # remove all elements up to the duplicate element
                    curr_sum -= nums[left]
                    del m[nums[left]]
                    left += 1
            
            # now we can add current element to the window
            curr_sum += nums[right]
            m[nums[right]] = right

            if len(m) == k:
                # update the answer
                o = max(o, curr_sum)
        return o
