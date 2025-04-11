class Solution:
    def countSymmetricIntegers(self, low: int, high: int) -> int:
        o = 0
        ord_0 = ord('0')

        for num in range(low, high + 1):
            num_str = str(num)
            if (len(num_str) % 2 != 0):
                continue

            left_sum = 0
            right_sum = 0
            for i in range(len(num_str)):
                diff = ord(num_str[i]) - ord_0
                if i < len(num_str) // 2:
                    # Left sum
                    left_sum += diff
                else:
                    right_sum += diff

            if left_sum == right_sum:
                o += 1
        
        return o
