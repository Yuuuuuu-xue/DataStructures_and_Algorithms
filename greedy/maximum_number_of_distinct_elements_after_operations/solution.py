from typing import List

class Solution:
    def maxDistinctElements(self, nums: List[int], k: int) -> int:
        nums.sort()

        curr_min = nums[0] - k + 1 # Since we take one element
        o = 1

        for i in range(1, len(nums)):
            new_min = nums[i] - k
            new_max = nums[i] + k

            # print(i, nums[i], curr_min, curr_max, new_min, new_max)

            # possible cases
            # if curr_min >= new_min, then we must take curr_min if possible
            if curr_min >= new_min:
                # then we take curr_min only if it is possible
                if curr_min <= new_max:
                    # take it
                    o += 1
                    curr_min += 1
                else:
                    # not possible, then we set the value to the max value
                    curr_min = new_max + 1
            else:
                # not fall into the range
                curr_min = new_min + 1
                o += 1

            # print(o, curr_min, curr_max)

        return o
