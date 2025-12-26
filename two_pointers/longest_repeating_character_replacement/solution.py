class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        window = [0 for _ in range(26)]

        left = 0
        o = 0
        for right in range(len(s)):
            window[ord(s[right]) - ord('A')] += 1

            while left < right:
                curr_sum = sum(window)
                curr_max = max(window)

                if curr_sum - curr_max <= k:
                    break
                
                window[ord(s[left]) - ord('A')] -= 1
                left += 1

            o = max(o, right - left + 1)
        return o

