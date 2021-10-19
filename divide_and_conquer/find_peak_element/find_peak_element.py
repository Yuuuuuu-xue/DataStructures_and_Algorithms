from typing import List


def findPeakElement(nums: List[int]) -> int:
    n = len(nums)
    if n == 1:
        return 0
    if n == 2:
        return 0 if nums[0] >= nums[1] else 1
    left = 0
    right = n - 1
    while left < right:
        middle = (left + right) // 2
        # Find a peak
        if nums[middle - 1] < nums[middle] and nums[middle + 1] < nums[middle]:
            return middle
        elif nums[middle - 1] > nums[middle]:
            right = middle - 1
        elif nums[middle + 1] > nums[middle]:
            left = middle + 1

    return left


if __name__ == '__main__':
    test_nums = [1, 2, 3, 1]
    print(2 == findPeakElement(test_nums))

