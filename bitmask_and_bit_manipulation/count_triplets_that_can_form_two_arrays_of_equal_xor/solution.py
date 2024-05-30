from typing import List

class Solution:
    def countTriplets(self, arr: List[int]) -> int:
        num_triplets = 0
        n = len(arr)
        for i in range(n - 1):
            curr_xor = arr[i]

            for k in range(i + 1, n):
                curr_xor ^= arr[k]
                
                if curr_xor == 0:
                    num_triplets += k - i
        
        return num_triplets
