class Solution:
    def numSubarrayProductLessThanK(self, nums: List[int], k: int) -> int:
        left = 0
        right = 0
        num_subproducts = 0
        n = len(nums)
        curr_product = 1
        while right < n:
            curr_product *= nums[right]

            # Move the pointer left until the product is less than k
            while left <= right and curr_product >= k:
                curr_product /= nums[left]
                left += 1
            num_subproducts += right - left + 1
            right += 1
        
        return num_subproducts
