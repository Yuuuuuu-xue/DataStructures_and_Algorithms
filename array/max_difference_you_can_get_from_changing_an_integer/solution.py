class Solution:
    def maxDiff(self, num: int) -> int:
        num_a_str = list(str(num))
        first_c = ''

        for i, c in enumerate(num_a_str):
            if c == first_c:
                num_a_str[i] = '9'
            elif first_c == '' and c != '9':
                first_c = c
                num_a_str[i] = '9'
        
        num_b_str = list(str(num))
        first_c = ''
        if num_b_str[0] == '1':
            for i, c in enumerate(num_b_str):
                # Find first non-zero and non-one with 0
                if c == first_c:
                    num_b_str[i] = '0'
                elif first_c == '' and (c != '0' and c != '1'):
                    first_c = c
                    num_b_str[i] = '0'
        else:
            # Replace all occurrences of first character with 1
            first_c = num_b_str[0]
            for i in range(len(num_b_str)):
                if num_b_str[i] == first_c:
                    num_b_str[i] = '1'

        # print(num_a_str, num_b_str)
    
        return int(''.join(num_a_str)) - int(''.join(num_b_str))

        
