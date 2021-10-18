from typing import *


def singleNumber(nums: List[int]) -> int:
    num = 0
    for item in nums:
        # XOR
        num ^= item
    return num


if __name__ == '__main__':
    test_list = [1, 2, 2, 3, 1]
    print(3 == singleNumber(test_list))

