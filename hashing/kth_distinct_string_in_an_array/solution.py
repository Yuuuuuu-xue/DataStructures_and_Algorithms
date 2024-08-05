from typing import List
from collections import defaultdict

class Solution:
    def kthDistinct(self, arr: List[str], k: int) -> str:
        m = defaultdict(int)
        for item in arr: 
            m[item] += 1

        for item in arr:
            # Unique item
            if m[item] == 1:
                # Kth unique
                if k == 1:
                    return item
                k -= 1
        
        return ""
                    
