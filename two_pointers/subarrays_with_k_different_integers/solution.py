from collections import defaultdict

class Solution:
    def subarraysWithKDistinct(self, nums: List[int], k: int) -> int:
        def atMostK(k: int) -> int:
            left = 0
            right = 0
            num_subarrays = 0
            m = defaultdict(int)
            n = len(nums)
            while right < n:
                m[nums[right]] += 1
                # Move the left pointer if m size >= k + 1
                while len(m) >= k + 1:
                    m[nums[left]] -= 1
                    if m[nums[left]] == 0:
                        del m[nums[left]]
                    left += 1
                num_subarrays += right - left + 1
                right += 1

            return num_subarrays
        
        return atMostK(k) - atMostK(k - 1)
