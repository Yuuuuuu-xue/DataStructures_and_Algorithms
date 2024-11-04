class Solution:
    def compressedString(self, word: str) -> str:
        curr_c = ''
        curr_f = 0

        compressed_word = ''

        for c in word:
            if curr_c == '':
                curr_c = c
                curr_f = 1
            elif curr_c == c and curr_f < 9:
                curr_f += 1
            else:
                # Different character or freq >= 9
                compressed_word += str(curr_f) + curr_c
                curr_c = c
                curr_f = 1
        
        if curr_f > 0:
            compressed_word += str(curr_f) + curr_c
        
        return compressed_word
