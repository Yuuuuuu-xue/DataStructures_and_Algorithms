class Solution:
    def val(self, c):
        return ord(c) - ord('a') + 1

    def sumScores(self, s: str) -> int:
        hash_base = 29
        hash_mod = 10**9 + 7
        
        # Forawrd hash to s[:i]
        forward_hashes = [0]
        p = [1]

        for c in s:
            forward_hashes.append((forward_hashes[-1] * hash_base + self.val(c)) % hash_mod)
            p.append((p[-1] * hash_base) % hash_mod)

        o = 0

        for i in range(len(s) - 1, -1, -1):
            left = i
            right = len(s) - 1

            max_val = 0
            while left <= right:
                mid = (left + right) // 2

                # hash(s[i:j]) = (forward_hashes[j] - forward_hashes[i] * p[j - i])
                hashed_value = (forward_hashes[mid + 1] - forward_hashes[i] * p[mid + 1 - i]) % hash_mod
                if hashed_value == forward_hashes[mid + 1 - i]:
                    max_val = max(max_val, mid - i + 1)
                    left = mid + 1
                else:
                    right = mid - 1
            o += max_val
        return o
