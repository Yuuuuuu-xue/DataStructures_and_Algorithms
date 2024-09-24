from typing import List

class Solution:
    def longestCommonPrefix(self, arr1: List[int], arr2: List[int]) -> int:
        trie = {}

        # Build the trie
        for num in arr1:
            num_str = str(num)
            curr = trie
            for c in num_str:
                if c not in curr:
                    curr[c] = {}
                curr = curr[c]
        
        # Find the longest prefix
        o = 0

        for num in arr2:
            num_str = str(num)
            curr_length = 0
            curr = trie
            for c in num_str:
                if c not in curr:
                    break
                curr_length += 1
                curr = curr[c]
            
            o = max(o, curr_length)

        return o

