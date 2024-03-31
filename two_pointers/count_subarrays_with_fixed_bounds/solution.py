class Solution:
    def countSubarrays(self, nums: List[int], minK: int, maxK: int) -> int:
        minI = -1
        maxI = -1
        x = -1
        num_subarrays = 0
        for i in range(len(nums)):
            if nums[i] < minK or nums[i] > maxK:
                x = i
            else:
                if nums[i] == minK:
                    minI = i
                if nums[i] == maxK:
                    maxI = i

            num_subarrays += max(0, min(minI, maxI) - x)

            
        return num_subarrays
