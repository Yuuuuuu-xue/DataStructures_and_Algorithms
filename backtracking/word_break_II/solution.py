from typing import List, Set

class Solution:
    def solve(self, s: str, word_set: Set[str], curr_list: List[str], i: int):
        if i >= len(s):
            self.word_list.append(' '.join(curr_list))

        curr_word = ""
        for idx in range(i, len(s)):
            curr_word += s[idx]
            if curr_word in word_set:
                curr_list.append(curr_word)
                self.solve(s, word_set, curr_list, idx + 1)
                
                # Backtrack
                curr_list.pop()

    def wordBreak(self, s: str, wordDict: List[str]) -> List[str]:
        word_set = set()
        for word in wordDict:
            word_set.add(word)
        
        curr_list = []
        self.word_list = []
        self.solve(s, word_set, curr_list, 0)
        return self.word_list
