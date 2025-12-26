class Solution:
    def val(self, c):
        return ord(c) - ord('a') + 1

    def longestPrefix(self, s: str) -> str:
        # Since 26 letters, 29 is the next larger prime
        hash_base = 29
        mod_base = 10**9 + 7

        o = 0

        forward_hash = 0
        reverse_hash = 0
        power = 1

        # -1 since we exclude s
        for i in range(len(s) - 1):
            forward_hash = (forward_hash * hash_base + self.val(s[i])) % mod_base
            reverse_hash = (reverse_hash + power * self.val(s[-1 - i])) % mod_base
            power = (power * hash_base) % mod_base

            # If they are the same, then they have the same prefix and suffix
            if forward_hash == reverse_hash:
                # We do a sanity check to verify they are actually the same to avoid collision
                if s[:i+1] == s[-1-i:]:
                    o = i + 1

        return s[:o]
