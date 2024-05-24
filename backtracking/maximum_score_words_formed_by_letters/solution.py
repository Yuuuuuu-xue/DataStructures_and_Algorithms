from typing import List

class Solution:
    def solve(self, words: List[str], letter_counter: List[int], score: List[int], i: int) -> int:
        if i >= len(words):
            return 0
        
        max_score = 0
        
        for idx in range(i, len(words)):
            # Try to use the word
            is_valid = True
            curr_score = 0
            for c in words[idx]:
                c_i = ord(c) - ord('a')
                letter_counter[c_i] -= 1
                if letter_counter[c_i] < 0:
                    is_valid = False
                curr_score += score[c_i]
            
            if is_valid:
                # If is valid, then recursive call
                max_score = max(max_score, curr_score + self.solve(words, letter_counter, score, idx + 1))
            
            # Backtrack
            for c in words[idx]:
                letter_counter[ord(c) - ord('a')] += 1
        
        return max_score

    def maxScoreWords(self, words: List[str], letters: List[str], score: List[int]) -> int:
        letter_counter = [0 for _ in range(26)]
        for c in letters:
            letter_counter[ord(c) - ord('a')] += 1
        return self.solve(words, letter_counter, score, 0)
