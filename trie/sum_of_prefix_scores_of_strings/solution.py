from typing import List

class Trie:
    def __init__(self):
        self.c = 0
        self.m = {}

class Solution:
    def sumPrefixScores(self, words: List[str]) -> List[int]:
        trie = Trie()

        for word in words: 
            curr = trie
            for c in word:
                if c not in curr.m:
                    curr.m[c] = Trie()
                curr = curr.m[c]
                curr.c += 1
        
        o = []
        for word in words:
            curr = trie
            curr_o = 0
            for c in word:
                curr = curr.m[c]
                curr_o += curr.c

            o.append(curr_o)
        
        return o

