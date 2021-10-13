## Divide and Conquer
Click [here](../notes.md) to go back to the notes page.

## Description
Given a **sorted** list L and a number a, return the left most insertion
point of a into L while remaining the sorted property. For example,
- L = [-1, 2, 2, 4], a = 1, then it will return 1
- L = [-1, 2, 2, 4], a = 2, then it will return 1

## Solution:
- [Python Solution](bisect_left.py). In Python, we can simply 
have
  ```
  from bisect import bisect_left
  # call it
  bisect_left(L, a) # return an index
  ```

