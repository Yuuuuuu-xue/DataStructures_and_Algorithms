from typing import List

class Solution:
    def lexicographicallySmallestArray(self, nums: List[int], limit: int) -> List[int]:
        nums_with_i = list(enumerate(nums))
        nums_with_i.sort(key=lambda num : num[1])

        groups = []
        curr_group = []

        for unsorted_i, num in nums_with_i:
            if len(curr_group) == 0:
                curr_group.append((unsorted_i, num))
            elif num - curr_group[-1][1] <= limit:
                curr_group.append((unsorted_i, num))
            else:
                groups.append(curr_group)
                curr_group = [(unsorted_i, num)]
        
        if len(curr_group) > 0:
            groups.append(curr_group)
        
        # Loop over each group
        o = [0 for _ in range(len(nums))]

        for group in groups:
            # group is sorted by num already
            # we want to put smallest item into smallest index
            sorted_group_by_i = sorted(group, key=lambda num: num[0])
        
            for i in range(len(group)):
                o[sorted_group_by_i[i][0]] = group[i][1]
        
        return o
