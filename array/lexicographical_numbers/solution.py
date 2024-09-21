from typing import List

class Solution:
    def lexicalOrder(self, n: int) -> List[int]:
        sorted_list = []
        curr_num = 1

        while len(sorted_list) < n:
            sorted_list.append(curr_num)

            # If curr num is 10, next smaller num will be 100
            if curr_num * 10 <= n:
                curr_num *= 10
            else:
                while curr_num % 10 == 9 or curr_num >= n:
                    curr_num //= 10
                curr_num += 1

        return sorted_list
