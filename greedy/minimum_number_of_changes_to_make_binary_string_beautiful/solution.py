class Solution:
    def minChanges(self, s: str) -> int:
        o = 0

        curr_digit = ''
        count = 0

        for c in s:
            if curr_digit == '':
                curr_digit = c
                count = 1
                continue

            if c == curr_digit:
                count += 1
                continue
                
            # different digit, even number, keep curr digit
            if count % 2 == 0:
                curr_digit = c
                count = 1
                continue

            # different digit, odd number, skip curr digit
            curr_digit = ''
            count = 0
            o += 1
        
        if count % 2 != 0:
            o += 1

        return o
