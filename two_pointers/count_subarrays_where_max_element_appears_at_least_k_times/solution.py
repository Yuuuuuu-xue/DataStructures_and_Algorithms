class Solution:
    def countSubarrays(self, nums: List[int], k: int) -> int:
        left = 0
        right = 0
        m = max(nums)
        num_max = 0
        num_subarray = 0
        n = len(nums)

        while right < n:
            if nums[right] == m:
                num_max += 1
            
            # Move left pointer while num_max is still >= k
            while num_max >= k:
                # If curr subarray [..., x, ..., y, ...] where x-y is current window (x is left and y is right), then all elements after y can be subarray (i.e. [x, ..., y, ...])
                # Thus the number of subarray will be n - right

                num_subarray += n - right
                if nums[left] == m:
                    num_max -= 1
                left += 1
            
            right += 1
        
        return num_subarray
                
