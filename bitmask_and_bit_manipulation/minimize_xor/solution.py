class Solution:
    def minimizeXor(self, num1: int, num2: int) -> int:
        num_ones = 0
        num_bits = 0

        while num2 > 0:
            if num2 & 1 == 1:
                num_ones += 1
            num_bits += 1
            num2 >>= 1
        
        # convert num1 to binary string
        num1_bin_str = bin(num1)[2:]
        if num_bits > len(num1_bin_str):
            num1_bin_str = (num_bits - len(num1_bin_str)) * '0' + num1_bin_str
        o = ['0' for _ in range(len(num1_bin_str))]

        for i in range(len(num1_bin_str)):
            if num_ones <= 0:
                break
            if num1_bin_str[i] == '1':
                o[i] = '1'
                num_ones -= 1
        
        for i in range(len(o) - 1, -1, -1):
            if num_ones <= 0:
                break
            if o[i] == '0':
                o[i] = '1'
                num_ones -= 1

        # convert to number
        return int(''.join(o), 2)

