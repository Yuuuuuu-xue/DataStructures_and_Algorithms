from typing import List

class Solution:
    def threeSumClosest(self, nums: List[int], target: int) -> int:
        o = float('inf')
        nums.sort()
        n = len(nums)

        # We fix index i, then search for j and k
        for i in range(n - 2):
            j = i + 1
            k = n - 1

            while j != k:
                three_sum = nums[i] + nums[j] + nums[k]
                if three_sum == target:
                    return three_sum
                
                if abs(three_sum - target) < abs(o - target):
                    o = three_sum
                if three_sum < target:
                    # Need a larger value
                    j += 1
                else:
                    # Need a smaller value
                    k -= 1
        
        return o
