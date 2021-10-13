from typing import *
from bisect import bisect_left


def find_index(lst: List[int], t: int) -> int:
    if not lst:
        return 0

    def bst(left: int, right: int) -> int:
        # both inclusive
        if left >= right:
            if lst[right] >= t:
                # then we found an insertion point
                return right
            else:
                # then has to be the end
                return right + 1

        m = (right + left) // 2

        # Solution is on the left side, if same then we check left side
        if lst[m] >= t:
            return bst(left, m)
        # right side
        return bst(m + 1, right)

    return bst(0, len(lst) - 1)


if __name__ == '__main__':
    testLst = [-5, -3, -3, 10, 16, 30]
    print(f'Test 1: {bisect_left(testLst, -3) == (output := find_index(testLst, -3))}, output {output}')
    testLst = [-5, 2, 2, 2, 2, 3, 3]
    print(f'Test 2: {bisect_left(testLst, 4) == (output := find_index(testLst, 4))}, output {output}')
    print(f'Test 3: {bisect_left(testLst, 1) == (output := find_index(testLst, 1))}, output {output}')
    print(f'Test 4: {bisect_left(testLst, -6) == (output := find_index(testLst, -6))}, output {output}')
    testLst = []
    print(f'Test 4: {bisect_left(testLst, 3) == (output := find_index(testLst, 3))}, output {output}')
