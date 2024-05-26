class Solution:
    def checkRecord(self, n: int) -> int:
        L = [1, 3]
        P = [1]
        A = [1, 2, 4]
        MOD = 10 ** 9 + 7

        # A[n] = A[n - 1] + A[n - 2] + A[n - 3]
        # L[n] = A[n - 1] + P[n - 1] + A[n - 2] + P[n - 2]
        # P[n] = A[n - 1] + P[n - 1] + L[n - 1]

        for i in range(1, n):
            P.append((A[i - 1] + P[i - 1] + L[i - 1]) % MOD)
            
            if i >= 2:
                L.append((A[i - 1] + P[i - 1] + A[i - 2] + P[i - 2]) % MOD)
            
            if i >= 3:
                A.append((A[i - 1] + A[i - 2] + A[i - 3]) % MOD)
        
        return (P[n - 1] + L[n - 1] + A[n - 1]) % MOD
        
