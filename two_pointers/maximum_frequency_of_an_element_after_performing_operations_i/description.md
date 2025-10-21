# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 3346

## Problem
You are given an integer array `nums` and two integers `k` and `numOperations`.

You must perform an operation `numOperations` times on `nums`, where in each operation you:
- Select an index `i` that was not selected in any previous operations
- Add an integer in the range `[-k, k]` to `nums[i]`

Return the maximum possible frequency of any element in `nums` after performing the operations.

## Example:
```
Input: nums = [1, 4, 5], k = 1, numOperations = 2
Output: 2
```

## Key Idea
Note, we can simply store the map that maps the number and its frequency. This is because all the numbers that are the same are the same frequency and requires 0 operations.

Then, for each number, we can keep a window `i`, `j` and `k` where `i` is the min elements in the window that can add up to the `nums[k]` and `j` is the max elements in the window that can add up to the `nums[k]`.

At each operation, we keep increment the window until the next element + new operation is not in the range. Then we decrement the window until the next element + new operation is not in the range. Then the total size is the all the elements that can be mapped to this `nums[k]` and with the operation.

Then, we can take `min(numOperations, freq)` because we can take at most `numOperations`.

For this window to work, we need to sort the array.

This whole thing assume it picks up an existing element. However, it is possible that we pick up some element that are non-existing. For instance, [10, 12], k = 1, then we can change 10 to 11 and 12 to 11. The solution is that, for each element, we keep an window so that all elements in the window can be mapped to an element. This means all the values `nums[i]` and `nums[j]` can be mapped to an element, which means, `nums[i] + nums[j] <= 2k`.

## Complexity Analysis
- Runtime Complexity: O(n lg n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)