class Solution:
    def firstMissingPositive(self, nums: List[int]) -> int:
        has_one = False
        n = len(nums)
        for i in range(n):
            if nums[i] == 1:
                has_one = True
            if nums[i] <= 0 or nums[i] > n:
                nums[i] = 1
        
        if not has_one:
            return 1
        
        for i in range(n):
            # Mark it as negative
            idx = abs(nums[i]) - 1
            nums[idx] = -abs(nums[idx])

        # Loop over, if positive, return it
        for i in range(n):
            if nums[i] > 0:
                return i + 1
        return n + 1

