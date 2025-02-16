from typing import List, Set

class Solution:
    def backtrack(self, n, nums: List[int], visited: Set[int], i):
        if i >= len(nums):
            # Need to ensure we use every numbers
            return len(visited) == n
        
        if nums[i] != 0:
            # This number is already marked as visited, we move to the next one
            return self.backtrack(n, nums, visited, i + 1)

        # Loop over numbers and star with largest
        for num in range(n, 0, -1):
            if num in visited or (num > 1 and i + num >= len(nums)):
                continue
            # Cannot place num in this position
            if num > 1 and nums[i + num] != 0:
                continue

            # Visit this number
            visited.add(num)
            nums[i] = num
            if num > 1:
                nums[i + num] = num
            if self.backtrack(n, nums, visited, i + 1):
                # We found the lexicographically largest sequence
                return True

            # Backtrack
            visited.remove(num)
            nums[i] = 0
            if num > 1:
                nums[i + num] = 0
        return False

    def constructDistancedSequence(self, n: int) -> List[int]:
        nums = [0 for _ in range(2 * (n - 1) + 1)]
        visited = set()
        self.backtrack(n, nums, visited, 0)
        return nums


