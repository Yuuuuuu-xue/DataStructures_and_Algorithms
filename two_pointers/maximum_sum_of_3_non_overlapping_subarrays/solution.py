from typing import List

class Solution:
    def maxSumOfThreeSubarrays(self, nums: List[int], k: int) -> List[int]:

        # Use sliding window to build the sum array
        window_sum = 0
        for i in range(k):
            window_sum += nums[i]
        sum_arr = [window_sum]
        
        for i in range(k, len(nums)):
            window_sum += nums[i]
            window_sum -= nums[i - k]
            sum_arr.append(window_sum)

        # Find max_left, maximum sum with index <= i
        max_left = [0]

        for i in range(1, len(sum_arr)):
            if sum_arr[i] > sum_arr[max_left[-1]]:
                max_left.append(i)
            else:
                max_left.append(max_left[-1])

        # Find max_right, maximum sum with index >= i
        max_right = [len(sum_arr) - 1]

        for i in range(len(sum_arr) - 2, -1, -1):
            if sum_arr[i] >= sum_arr[max_right[-1]]:
                max_right.append(i)
            else:
                max_right.append(max_right[-1])
        max_right = max_right[::-1]

        # Find the maximum possible sum
        o = [-1, -1, -1]
        max_sum = 0

        for i in range(k, len(sum_arr) - k):
            x = max_left[i - k]
            z = max_right[i + k]

            if sum_arr[x] + sum_arr[i] + sum_arr[z] > max_sum:
                max_sum = sum_arr[x] + sum_arr[i] + sum_arr[z]
                o = [x, i, z]
        
        return o
