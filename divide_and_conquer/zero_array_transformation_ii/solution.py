from typing import List

class Solution:
    def minZeroArray(self, nums: List[int], queries: List[List[int]]) -> int:
        # Base case
        if max(nums) == 0:
            return 0

        left = 0
        right = len(queries)
        n = len(nums)
        o = right + 1

        while left <= right:
            mid = (left + right) // 2

            # Try to apply (mid) operations
            new_nums = [0 for _ in range(n + 1)]
            for k in range(mid):
                l, r, val = queries[k]
                new_nums[l] += val
                new_nums[r + 1] -= val

            total = 0
            k_work = True
            for i in range(n):
                total += new_nums[i]
                if total < nums[i]:
                    k_work = False
                    break
            if k_work:
                # Binary search left
                o = min(o, mid)
                right = mid - 1
            else:
                # k does not work
                left = mid + 1
        return o if o <= len(queries) else -1
