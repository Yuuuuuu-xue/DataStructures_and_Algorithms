class Solution:
    def shortestCommonSupersequence(self, str1: str, str2: str) -> str:
        n = len(str1)
        m = len(str2)

        # index-1 based
        dp = [[0 for _ in range(m + 1)] for _ in range(n + 1)]

        for i in range(n):
            for j in range(m):
                if str1[i] == str2[j]:
                    # same character
                    dp[i + 1][j + 1] = 1 + dp[i][j]
                else:
                    dp[i + 1][j + 1] = max(dp[i][j + 1], dp[i + 1][j])
        
        # build the output
        i = n - 1
        j = m - 1
        
        o = []
        while i >= 0 and j >= 0:
            if str1[i] == str2[j]:
                o.append(str1[i])
                i -= 1
                j -= 1
            elif dp[i][j + 1] >= dp[i + 1][j]:
                # Take character from str1
                o.append(str1[i])
                i -= 1
            else:
                # Take character from str2
                o.append(str2[j])
                j -= 1
        
        while i >= 0:
            o.append(str1[i])
            i -= 1
        while j >= 0:
            o.append(str2[j])
            j -= 1
        
        return ''.join(o[::-1])
