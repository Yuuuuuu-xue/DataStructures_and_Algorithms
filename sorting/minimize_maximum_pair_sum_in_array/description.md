## Sorting Algorithms
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
NMediun 1877

## Description
The pair sum of a pair `(a, b)` is equal to `a + b`. The maximum pair sum is the largest pair sum in a list of pairs.

For example, if we have pairs `(1, 5)`, `(2, 3)`, and `(4, 4)`, the maximum pair sums would be `max(1 + 5, 2 + 3, 4 + 4) = 8`

Given an array `nums` of even length `n`, pair up the elements of `nums` into `n / 2` pairs such that:
- each element of `nums` is in exactly one pair, and
- the maximum pair sum is minimized

Return the minimized maximum pair sums after optimally pairing up the elements.

## Example
```
Input: nums = [3, 5, 2, 3]
Output: 7
Explanation: The elements can be paired up into pairs (3, 3) and (5, 2) and maximum pair sum is max(3 + 3, 5 + 2) = 7

Input: nums = [3, 5, 4, 2, 4, 6]
Output: 8
Explanation: The elements can be paired up into pairs(3, 5), (4, 4), and (6, 2), and maximum pair sum is max(3 + 5, 4 + 4, 6 + 2) = 8
```

## Key Idea
We always want to pair up the current minimum and current maximum. Thus, we need to sort the input numbers, then pick up the current minimum and current maximum as the pair, and update the final output.

## Complexity Analysis
- Runtime Complexity: O(n lg n)
- Space Complexity: O(1)

## Solution
- [C++](solution.cpp)
