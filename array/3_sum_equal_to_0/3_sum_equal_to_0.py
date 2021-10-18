from typing import *
from collections import defaultdict


def threeSum(nums: List[int]) -> List[Tuple[int, int, int]]:
    sorted_nums = sorted(nums)
    m = defaultdict(int)
    output = set()

    for item in sorted_nums:
        m[item] += 1

    # Item that we have visited
    visited = set()
    for item_j in sorted_nums:
        m[item_j] -= 1
        for item_i in visited:
            if (item_k := -(item_i + item_j)) in m and m[item_k] > 0:
                output.add((item_i, item_j, item_k))
        visited.add(item_j)
    return list(output)


if __name__ == '__main__':
    test_list = [-1, 0, 1, 2, -1, -4]
    print({(-1, 0, 1), (-1, -1, 2)} == set(threeSum(test_list)))



