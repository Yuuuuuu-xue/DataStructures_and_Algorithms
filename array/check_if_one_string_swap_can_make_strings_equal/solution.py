class Solution:
    def areAlmostEqual(self, s1: str, s2: str) -> bool:
        n = len(s1)
        k = -1
        is_swap = False

        for i in range(n):
            if s1[i] == s2[i]:
                continue

            if is_swap:
                # Already swap before, cannot swap one more time
                return False

            if k == -1:
                k = i
            else:
                # k != -1, need to check if we can swap
                if s1[k] == s2[i] and s1[i] == s2[k]:
                    # Can swap
                    k = -1
                    is_swap = True
                else:
                    return False
        
        return k == -1

