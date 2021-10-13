from typing import *


def find(lst: List[int], b: int, e: int) -> int:
    def helper(left: int, right: int, curr_min=0) -> int:
        # Base case
        if right - 1 == left:
            if lst[left] > curr_min:
                return curr_min
            return lst[left] + 1
        else:
            m = (right + left) // 2
            # If current index is smaller than the middle value, then we know
            # the solution is on the left side
            if m < lst[m]:
                return helper(left, m, curr_min)
            # else we know that the solution is on the right side, we can update
            # our curr_min to m
            else:
                return helper(m, right, m)

    return helper(b, e)


if __name__ == '__main__':
    testLst = [0, 1, 4, 7]
    expected = 2
    print(find(testLst, 0, 4) == expected)
