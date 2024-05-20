from typing import List

class Solution:
    def findLengthOfShortestSubarray(self, arr: List[int]) -> int:
        n = len(arr)
        right = n - 1
        while right > 0 and arr[right - 1] <= arr[right]:
            right -= 1

        # If right == 0, then the array is already sorted in non-decreasing order
        if right == 0:
            return 0
    
        left = 0
        # Keep everything on the right side, then we have n - right
        max_len = n - right
        # It's not possible such that left >= right because otherwise it implies that the entire array is sorted in non-decreasing
        while left < n:
            # Increment right such that we can join arr[:left + 1] + arr[right:]
            while right < n and arr[left] > arr[right]:
                right += 1
            
            # Join arr[:left + 1] + arr[right:] which has length
            # (left + 1) + (n - right)
            max_len = max(max_len, left + 1 + n - right)
            
            if left + 1 < n and arr[left] > arr[left + 1]:
                return n - max_len

            left += 1
        
        return n - max_len
