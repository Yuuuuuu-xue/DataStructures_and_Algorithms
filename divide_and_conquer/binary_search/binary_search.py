from typing import *


def find_index(lst: List[int], t: int) -> int:
    if not lst:
        return -1

    def bst(left: int, right: int) -> int:
        # both inclusive
        if left >= right:
            if lst[right] == t:
                return right
            return -1

        m = (right + left) // 2

        # Solution is on the left side
        if lst[m] >= t:
            return bst(left, m)
        # right side
        return bst(m + 1, right)

    return bst(0, len(lst) - 1)


if __name__ == '__main__':
    testLst = [-5, -3, -3, 10, 16, 30]
    print(f'Test 1: {1 == (output := find_index(testLst, -3))}, output {output}')
    testLst = [-5, 2, 2, 2, 2, 3, 3]
    print(f'Test 2: {1 == (output := find_index(testLst, 2))}, output {output}')
    print(f'Test 3: {-1 == (output := find_index(testLst, 1))}, output {output}')
    testLst = []
    print(f'Test 4: {-1 == (output := find_index(testLst, 3))}, output {output}')
