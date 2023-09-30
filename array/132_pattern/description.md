# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 456

## Problem
Given an array of `n` integers `nums`, a 132 pattern is a subsequence of three integers `nums[i], nums[j]` and `nums[k]` such that `i < j < k` and `nums[i] < nums[k] < nums[j]`.

Return `true` if there is a 132 pattern in `nums`, otherwise, return `false`.

## Example:
```
Input: nums = [1, 2, 3, 4]
Output: false

Input: nums = [3, 1, 4, 2]
Output: true
Explanation: There is a 132 pattern in the sequence [1, 4, 2]

Input: nums = [-1, 3, 2, 0]
Output: true
Explanation: There are three 132 pattern in the sequence: [-1, 3, 2], [-1, 3, 0], and [-1, 2, 0]
```

## Key Idea
We will use a stack to solve this problem. Let `currK` be negative infinity first and `s` be a stack of maximum numbers we have seen so far. We will start loop from back and try to find `currK` and the top of the stack will be our `currJ`. Then if `nums[i] < currK`, we can return true because we will compute `currK` based on the stack which means there is at least one element in the stack with index `< k` and value > `currK`.

Next, we will try to pop the element from the stack that is `< nums[i]` and assign it to `currK`.

At the end, we push `nums[i]` to the stack as it will be our `nums[j]`.

Note, `currK` has an initial value of negative infinity, thus, for it to have a value, we must have a something in the stack (i.e. `nums[j]` such that `nums[j] > currK`), and if we have `nums[i] < currK` and `currK < nums[j]`, then we find one 132 pattern.


 
## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [C++](solution.cpp)
- [Rust](./solution.rs)