class Solution:
    def findKthNumber(self, n: int, k: int) -> int:
        curr_num = 1

        while k:
            k -= 1

            if curr_num * 10 < n:
                curr_num *= 10
            else:
                while curr_num % 10 == 9 or curr_num >= n:
                    curr_num //= 10
                curr_num += 1

        return curr_num        
