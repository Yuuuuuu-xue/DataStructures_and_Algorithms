## Disjoint Set
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 128

## Problem
Given an unsorted array of integers `nums`, return the length of the longest consecutive elements sequence.

You must write an algorithm that runs in `O(n)` time.

## Example
```
Input: nums = [100, 4, 200, 1, 3, 2]
Output: 4
Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. Therefore its length is 4.
```

## Key Idea
To solve this problem, we can simply convert the nums into a set, then for a given number `x`, we can check if `x + 1` and so on until the number is not in the set. Then we check if `x - 1` and so on until the number is not in the set. If the number is in the set, remove it, repeat the same process. This way, we can find the number of consecutive elements efficiently.

But we can also solve this problem with disjoint set. Note, if we loop over a number `x`, it has a range `[x, x]`, we can merge it with any group of range `[x + 1, ...]` and `[..., x - 1]`.

So for each number, we can simply union the group of `x - 1` and `x + 1`.

This is particular useful if we want to know the longest of consecutive elements after an insertion.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution:
- [Python](./solution.py)