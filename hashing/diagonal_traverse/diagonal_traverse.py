from typing import *
from collections import defaultdict


def findDiagonalOrder(matrix: List[List[int]]) -> List[int]:
    m = defaultdict(list)

    # Store all the anti-diagonals
    for i in range(len(matrix)):
        for j in range(len(matrix[0])):
            m[i + j].append(matrix[i][j])

    output = []
    for key in m.keys():
        # If odd then extend
        if key % 2 != 0:
            output.extend(m[key])
        # If even then extend in reversed direction
        else:
            output.extend(m[key][::-1])
    return output


if __name__ == '__main__':
    test_matrix = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
    print([1, 2, 4, 7, 5, 3, 6, 8, 9] == findDiagonalOrder(test_matrix))

