from typing import List

class Solution:
    def maxSumRangeQuery(self, nums: List[int], requests: List[List[int]]) -> int:
        nums.sort()
        n = len(nums)
        freq = [0 for _ in range(n)]
        for request in requests:
            freq[request[0]] += 1
            if request[1] + 1 < n:
                freq[request[1] + 1] -= 1
        
        # Build the actual freq
        for i in range(1, n):
            freq[i] += freq[i - 1]
        
        # Build the sum
        max_sum = 0
        freq.sort()
        
        for i in range(n):
            max_sum += nums[i] * freq[i]
        return max_sum % (10**9 + 7)
