## Fenwick Tree or Binary Indexed Tree
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 307

## Problem
Given an integer array `nums`, handle multiple queries of the following types :
1. Update the value of an element in `nums`
2. Calculate the sum of the elements of `nums` between indicies `left` and `right` inclusive where `left <= right`.

Implement the `NumArray` class:
- `NumArray(int[] nums)` initializes the object with the integer array `nums`
- `void update(int index, int val)` updates the value of `nums[index]` to be `val`
- `int sumRange(int left, int right)` returns the sum of the elements of nums between indicies `left` and `right` inclusive (i.e. `nums[left] + nums[left + 1] + ... + nums[right]`).

You can assume `-100 <= val <= 100`.

## Example:
```
Input:
["NumArray", "sumRange", "update", "sumRange"]
[[1, 3, 5] [0, 2], [1, 2], [0, 2]]
Output:
[null, 9, null, 8]
```

## Key Idea
Note the sum between nums[left] and nums[right] is the prefix sum of nums[right] - prefix sum of nums [left - 1]. Then we can use the Fenwick tree or BIT to solve this problem. However, one assumption is that the value of BIT is always >= 0 so we need to convert negative numbers to positive. Notice we can assume that `100 <= val <= 100`, then for each number, we just add 100. And for get sum, we just get the output sum and - 100 * number of numbers (which is right - left + 1).

## Complexity Analysis
- For the constructor, we need to initialize the fenwick tree and call `update` for each time, thus `O(n lg n)`
- For update, we just update the fenwick tree, thus `O(lg n)`
- For sum, we get two prefix sum and thus `O(2 lg n) = O(lg n)`

## Solution:
- [C++](solution.cpp)