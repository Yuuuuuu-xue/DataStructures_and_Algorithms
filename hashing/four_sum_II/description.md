## Hashing
Click [here](../notes.md) to go back to the notes page.

## Question
Given four lists A, B, C, D of integer values, compute how many tuples (i, j, k, l) there are such that $A[i] + B[j] + C[k] + D[l]$ is zero.

## Example
```
Input:
A = [1, 2]
B = [-2, -1]
C = [-1, 2]
D = [0, 2]

Output: 2

Explanation:
A[0] + B[0] + C[0] + D[1] = 0
A[1] + B[1] + C[0] + D[0] = 0
```

## Key Idea
We can simply loop over A and B, use a hash map to store the occurrence of the sum $A[i] + B[j]$.

Then we can loop over C and D, and if $-1 * (C[k] + D[l])$ is in the map, then we can add the occurrence to the output.

## Solution
- [Python Solution](four_sum_II.py)