from typing import List

class Solution:
    def maxChunksToSorted(self, arr: List[int]) -> int:
        o = 0

        i = 0
        max_curr = -1

        while i < len(arr):
            max_curr = max(max_curr, arr[i])

            if max_curr == i:
                # Same as index, we finish one chunk
                pass
            else:
                # > index, we need to increment i until we reach to index
                while max_curr > i and i + 1 < len(arr):
                    i += 1
                    max_curr = max(max_curr, arr[i])
            
            # Use one chunk
            o += 1
            i += 1
        return o
