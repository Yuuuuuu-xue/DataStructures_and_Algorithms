from typing import List

class Solution:
    def maximumLength(self, nums: List[int]) -> int:
        num_even = 0
        # num_odd = len(nums) - num_even

        even_odd = 0
        ends_with_even = False
        # We count the even - odd - even - odd

        for num in nums:
            if num % 2 == 0:
                num_even += 1
                if not ends_with_even:
                    even_odd += 1
                    ends_with_even = True
            else:
                # odd
                if ends_with_even:
                    even_odd += 1
                    ends_with_even = False
        
        # At the end, even_odd gives the number of elements alternating between even-odd
        # However, we can count the number of elements odd - even - odd - even
        # by check if first element is odd, then 1 + even_odd
        # else, even_odd - 1
        odd_even = (1 + even_odd) if nums[0] % 2 != 0 else (even_odd - 1)
        return max(num_even, len(nums) - num_even, even_odd, odd_even)
