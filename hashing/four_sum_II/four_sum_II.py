from typing import *
from collections import defaultdict


def fourSumCount(A: List[int], B: List[int], C: List[int], D: List[int]) -> int:
    m = defaultdict(int)
    # Assume len(A) == len(B) == len(C) == len(D)
    n = len(A)
    output = 0

    # Loop over A and B to find the occurrence
    for i in range(n):
        for j in range(n):
            m[A[i] + B[j]] += 1

    # Loop over C and D to find actual tuples
    for k in range(n):
        for l in range(n):
            if (sum_ := -(C[k] + D[l])) in m:
                output += m[sum_]
    return output


if __name__ == '__main__':
    test_A = [1, 2]
    test_B = [-2, -1]
    test_C = [-1, 2]
    test_D = [0, 2]
    print(2 == fourSumCount(test_A, test_B, test_C, test_D))

