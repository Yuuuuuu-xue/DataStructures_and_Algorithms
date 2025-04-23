from collections import defaultdict

class Solution:
    def toDigitSum(self, num: int) -> int:
        digit_sum = 0
        for c in str(num):
            digit_sum += ord(c) - ord('0')
        return digit_sum

    def countLargestGroup(self, n: int) -> int:
        m = defaultdict(int)
        
        for num in range(1, n + 1):
            m[self.toDigitSum(num)] += 1
        
        o = 0
        max_length = 0

        for k in m:
            if m[k] > max_length:
                max_length = m[k]
                o = 1
            elif m[k] == max_length:
                o += 1

        # print(m)
        
        return o

