from typing import List

class Solution:
    def peakIndexInMountainArray(self, arr: List[int]) -> int:
        left = 0
        right = len(arr) - 1

        while left <= right:
            mid = (left + right) // 2
            if mid == 0:
                if arr[mid] > arr[right]:
                    return mid
                else:
                    left = mid + 1
            elif mid == len(arr) - 1:
                if arr[mid] > arr[left]:
                    return mid
                else:
                    right = mid - 1
            else:
                # 3 indexes
                if arr[mid] > arr[mid - 1] and arr[mid] > arr[mid + 1]:
                    return mid
                elif arr[mid - 1] < arr[mid] and arr[mid] < arr[mid + 1]:
                    left = mid + 1
                else:
                    right = mid - 1
        
        return -1
