from typing import List


class Trie:
    def __init__(self):
        self.children = {}
        self.is_end = False


class Solution:
    def replaceWords(self, dictionary: List[str], sentence: str) -> str:
        trie = Trie()

        for word in dictionary:
            # Build trie
            curr = trie
            for c in word:
                if c not in curr.children:
                    curr.children[c] = Trie()
                curr = curr.children[c]
            # Set the last character to be is_end to true
            curr.is_end = True
        
        words = sentence.split(' ')
        
        for i in range(len(words)):
            # Search the trie
            curr = trie
            k = 0
            while k < len(words[i]) and not curr.is_end and words[i][k] in curr.children:
                curr = curr.children[words[i][k]]
                k += 1
            
            # Modify the word
            if curr.is_end:
                words[i] = words[i][:k]
        
        return ' '.join(words)

