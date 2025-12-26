class Solution:
    def val(self, c):
        return ord(c) - ord('a') + 1

    def shortestPalindrome(self, s: str) -> str:
        # prime
        hash_base = 29
        mod_value = 10**9 + 7

        forward_hash = 0
        reverse_hash = 0

        power_value = 1
        palindrome_end_index = -1

        # Calculate rolling hashes and find the longest palindromic prefix
        for i, current_char in enumerate(s):
            # Update forward hash
            forward_hash = (forward_hash * hash_base + self.val(current_char)) % mod_value

            reverse_hash = (reverse_hash + self.val(current_char) * power_value) % mod_value

            power_value = (power_value * hash_base) % mod_value

            if forward_hash == reverse_hash:
                palindrome_end_index = i
        
        reverse_suffix = s[palindrome_end_index + 1:][::-1]
        return reverse_suffix + s
