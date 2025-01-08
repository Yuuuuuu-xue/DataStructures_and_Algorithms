from typing import List

class TrieNode:
    def __init__(self):
        self.children = {}
        self.counter = 0

class Solution:
    def countPrefixSuffixPairs(self, words: List[str]) -> int:
        trie = TrieNode()
        o = 0

        for i in range(len(words) - 1, -1, -1):
            curr = trie
            for k in range(len(words[i])):
                prefix_c = words[i][k]
                suffix_c = words[i][len(words[i]) - k - 1]
                trie_key = (prefix_c, suffix_c)

                if trie_key not in curr.children:
                    curr.children[trie_key] = TrieNode()
                curr = curr.children[trie_key]
                # Increment the counter for all nodes in the path
                curr.counter += 1
            
            # After we reach to the end
            # curr.counter will be the number of words such that words[j] is both prefix and suffix
            # Need to -1 because when we build the Trie, it will stop at words[j] and increment counter by 1
            o += curr.counter - 1
        
        return o

                
