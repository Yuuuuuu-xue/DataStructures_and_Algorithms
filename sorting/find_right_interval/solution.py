from typing import List

class Solution:
    def bisect_left(self, nums, num):
        i = len(nums)
        left = 0
        right = len(nums) - 1

        while left <= right:
            mid = (left + right) // 2
            
            if nums[mid][0] >= num:
                i = min(i, mid)
                right = mid - 1
            else:
                left = mid + 1
        
        if i == len(nums):
            return -1
        return i

    def findRightInterval(self, intervals: List[List[int]]) -> List[int]:
        start_with_i = [(intervals[i][0], i) for i in range(len(intervals))]
        start_with_i.sort()

        o = []
        for _, end_time in intervals:
            i = self.bisect_left(start_with_i, end_time)
            if i != -1:
                o.append(start_with_i[i][1])
            else:
                o.append(-1)
        return o
