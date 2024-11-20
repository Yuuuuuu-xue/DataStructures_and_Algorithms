class Solution:
    def takeCharacters(self, s: str, k: int) -> int:
        counters = [0, 0, 0]
        ord_a = ord('a')

        for c in s:
            counters[ord(c) - ord_a] += 1

        if counters[0] < k or counters[1] < k or counters[2] < k:
            return -1
        
        curr_counters = [0, 0, 0]

        o = len(s)
        left = 0
        for right in range(len(s)):
            # need to add current character into the window
            curr_counters[ord(s[right]) - ord_a] += 1

            # we want to maximize the window, don't want to increase left counter
            # increase only when there are less than k elements outside the window
            # this means counters[i] - curr_counters[i] < k
            while left <= right and (counters[0] - curr_counters[0] < k or counters[1] - curr_counters[1] < k or counters[2] - curr_counters[2] < k):
                curr_counters[ord(s[left]) - ord_a] -= 1
                left += 1
            
            # If left > right, then this means not a valid window
            if left > right:
                continue
                
            # we have a valid window, we can take everything up to left and everything after right, this means len - (right - left + 1)
            o = min(o, len(s) - (right - left + 1))
        return o