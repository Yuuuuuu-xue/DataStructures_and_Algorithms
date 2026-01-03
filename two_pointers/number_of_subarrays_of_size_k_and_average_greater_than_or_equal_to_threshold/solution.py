from typing import List

class Solution:
    def numOfSubarrays(self, arr: List[int], k: int, threshold: int) -> int:
        curr_sum = 0
        for i in range(k):
            curr_sum += arr[i]

        o = 0
        if curr_sum / k >= threshold: 
            o += 1
        
        for i in range(1, len(arr) - k + 1):
            curr_sum -= arr[i - 1]
            curr_sum += arr[i + k - 1]
            if curr_sum / k >= threshold:
                o += 1
        return o
