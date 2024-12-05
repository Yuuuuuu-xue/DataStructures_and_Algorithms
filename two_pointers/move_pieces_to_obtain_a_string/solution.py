class Solution:
    def canChange(self, start: str, target: str) -> bool:
        i = 0
        j = 0
        n = len(start)
        m = len(target)

        while i < n and j < m:
            while i < n and start[i] == '_':
                i += 1
            if i >= n:
                break
            while j < m and target[j] == '_':
                j += 1
            if j >= m:
                break

            if start[i] != target[j]:
                return False
            
            if start[i] == 'L' and i < j:
                # We can move L to the left
                return False
            elif start[i] == 'R' and i > j:
                # We can move R to the right
                return False
            i += 1
            j += 1
        
        while i < n and start[i] == '_':
            i += 1
        while j < m and target[j] == '_': 
            j += 1

        return i >= n and j >= m
