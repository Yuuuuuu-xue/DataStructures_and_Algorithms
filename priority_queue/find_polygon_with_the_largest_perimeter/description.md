## Priority Queue
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 2971

## Problem
You are given an array of positive integers `nums` of length `n`.

A polygon is a closed plane figure that has at least `3` sides. The longest side of a polygon is smaller than the sum of its other sides.

Conversely, if you have `k` (`k >= 3`) positive real numbers `a1`, `a2`, `a3`, ..., `ak` where `a1 <= a2 <= a3 <= ... <= ak` and `a1 + a2 + a3 + ... + a_k-1 > ak`, then there always exists a polygon with `k` sides whose legnths are `a1`, `a2`, `a3`, ..., `ak`.

The perimeter of a polygon is the sum of lengths of its sides.

Return the largest possible perimeter of a polygon whose sides can be formed from `nums`, or `-1` if it is not possible to create a polygon.

## Example
```
Input: nums = [5, 5, 5]
Output: 15

Input: nums = [1, 12, 1, 2, 5, 50, 3]
Output: 12
Explanation: The polygon with largest perimeter which can be made with sides 1, 1, 2, 3, and 5. Including the 12 or 50 violates the constraint a1 + a2 + a3 + ... + a_k-1 > ak
```

## Key Idea
Simply let `s` be the sum of the nums and let `pq` be a max heap priority queue. For each number in `pq` (while `pq` still has two elements), we check if `s - pq.top() > pq.top()`, if so, we found the polygon and return `s`. If not, pop it from `pq` and let `s -= pq.top()`.

At the end, we have `pq` size less than 2, then we did not find such polygon and we can return `-1`.

## Complexity Analysis
- Runtime Complexity: O(n lg n)
- Space Complexity: O(1)

## Solution
- [C++](./solution.cpp)