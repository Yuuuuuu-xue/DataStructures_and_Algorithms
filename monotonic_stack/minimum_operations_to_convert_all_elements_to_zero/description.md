## Monotonic Stack
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 3542

## Problem
You are given an array `nums` of size `n`, consisting of non-negative integers. Your task is to apply some (possibily zero) operations on the array so taht all elements become 0.

In one operation, you can select a subarray `[i, j]` (where `0 <= i <= j < n`) and set all occurrences of the minimum non-negative integer in that subarray to 0.

Return the minimum number of operations required to make all elements in that array 0.

## Example
```
Input: nums = [3, 1, 2, 1]
Output: 3
Explanation:
- Select subarray from index 1 to 3, [1, 2, 1], resulting in [3, 0, 2, 0]
- Select subarray at index 2, resulting in [3, 0, 0, 0]
- Select subarray at index 0, resulting in [0, 0, 0, 0]
```

## Key Idea
Note, if we keep track of previous operations in an array, then for each element `num`, if it is the same value of previous operation value, then we can skip it since we can set both of them to 0.

If the value is smaller, which means the previous operation cannot be used to set current value to 0, hence we need to remove the previous operation.

After, if current value is not to 0, we store it in the array.

Hence, the array is in an increasing order and thus monotonic stack.
We pop higher value out (hence it is in an increasing order) because current element is smaller and we must stop here.
 
## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)
