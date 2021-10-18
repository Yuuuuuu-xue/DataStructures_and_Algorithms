from typing import *


def maxProduct(nums: List[int]) -> int:
    # Since it has to contain at least one number
    max_ = min_ = output = nums[0]
    for i in range(1, len(nums)):
        # The greatest number, if nums[i] < 0 and min_ < 0, then min_ * nums[i] will be the largest
        x = max(nums[i], max_ * nums[i], min_ * nums[i])
        y = min(nums[i], max_ * nums[i], min_ * nums[i])
        max_ = x
        min_ = y

        # Since we want the maximum product, so no need to check for min_
        output = max(output, max_)
    return output


if __name__ == '__main__':
    test_list = [2, 3, -2, 4]
    print(6 == maxProduct(test_list))


