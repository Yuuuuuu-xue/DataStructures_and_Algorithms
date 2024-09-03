class Solution:
    def getLucky(self, s: str, k: int) -> int:
        ord_a = ord('a')
        num_str = ""
        for c in s:
            num_str += str(ord(c) - ord_a + 1)
        
        while k:
            k -= 1
            new_num = 0
            for c in num_str:
                new_num += int(c)
            num_str = str(new_num)
        
        return int(num_str)

