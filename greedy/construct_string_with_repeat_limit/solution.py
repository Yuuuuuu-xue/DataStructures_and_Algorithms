from collections import defaultdict

class Solution:
    def repeatLimitedString(self, s: str, repeatLimit: int) -> str:
        m = defaultdict(int)

        for c in s:
            m[c] += 1

        int_a = ord('a')
        i = 26
        o = ''
        largest_i = 25
        
        while largest_i >= 0:
            c = chr(largest_i + int_a)
            # print('c', largest_i, c, m[c])
            if m[c] <= 0:
                largest_i -= 1
                continue
                
            num_characters = min(m[c], repeatLimit)
            m[c] -= num_characters
            o += c * num_characters

            if num_characters == repeatLimit and m[c] > 0:
                i = min(i, largest_i - 1)
                # We need to use the next largest digit
                next_c = chr(i + int_a)
                while i >= 0 and m[chr(i + int_a)] <= 0:
                    i -= 1
                    next_c = chr(i + int_a)
                # We do not have enough letter to use, we set it to 0
                if i >= 0:
                    m[next_c] -= 1
                    # print('i', i, next_c, m[next_c])
                    o += next_c
                    # Repeat the same process
                    continue
                
            largest_i -= 1
        return o
