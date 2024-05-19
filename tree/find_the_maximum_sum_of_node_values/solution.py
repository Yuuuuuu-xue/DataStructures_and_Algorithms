from typing import List

class Solution:
    def maximumValueSum(self, nums: List[int], k: int, edges: List[List[int]]) -> int:
        min_selected_diff = float('inf')
        max_non_selected_diff = float('-inf')
        max_val = 0
        num_selected_nodes = 0

        for num in nums:
            xor = num ^ k
            if xor >= num:
                min_selected_diff = min(min_selected_diff, xor - num)
                max_val += xor
                num_selected_nodes += 1
            else:
                max_val += num
                max_non_selected_diff = max(max_non_selected_diff, xor - num)
        
        if num_selected_nodes % 2 == 0:
            return max_val

        # Odd number, then we need to either drop one node in the selected or add another node to selected
        # Drop one node: since we already add XOR, we can simply - min_selected_diff
        # Add another node: since we already add num, we can simply + max_non_selected_diff
        return max(max_val - min_selected_diff, max_val + max_non_selected_diff)

                
