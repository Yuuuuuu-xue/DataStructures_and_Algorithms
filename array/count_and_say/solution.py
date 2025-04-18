class Solution:
    def countAndSay(self, n: int) -> str:
        o = "1"
        
        for _ in range(n - 1):
            next_o = ""
            curr_count = 1
            curr_c = o[0]

            for i in range(1, len(o)):
                if o[i] == curr_c:
                    curr_count += 1
                else:
                    # Diff character
                    next_o += str(curr_count) + str(curr_c)
                    curr_count = 1
                    curr_c = o[i]
            
            next_o += str(curr_count) + str(curr_c)
            o = next_o
        
        return o
        

