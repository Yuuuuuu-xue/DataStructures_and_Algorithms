from typing import List

class Trie:
    def __init__(self):
        self.children = {}
        self.count = 0

class Solution:
    def prefixCount(self, words: List[str], pref: str) -> int:
        trie = Trie()

        for word in words:
            curr = trie
            for c in word:
                if c not in curr.children:
                    curr.children[c] = Trie()
                curr = curr.children[c]
                curr.count += 1
        
        curr = trie
        for c in pref:
            if c not in curr.children:
                # No prefix of any word
                return 0
            curr = curr.children[c]
        
        return curr.count
