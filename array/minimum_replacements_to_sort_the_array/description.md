# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Hard 2366

## Problem
You are given a 0-indexed integer array `nums`. In one operation you can replace any element of the array with any two elements that sum to it.

For example, consider `nums = [5, 6, 7]`. In one operation, we can replace `nums[1]` with `2` and `4` and convert `nums` to `[5, 2, 4, 7]`.

Return the minimum number of operations to make an array that is sorted in non-decreasing order.

## Example
```
Input: nums = [3, 9, 3]
Output: 2
Explanation: Here are the steps to sort the array in non-decreasing order: 
- from [3, 9, 3], replace 9 with 3 and 6 so the array becomes [3, 3, 6, 3]
- from [3, 3, 6, 3], replace the 6 with 3 and 3 so the array becomes [3, 3, 3, 3, 3]

Input: nums = [1, 2, 3, 4, 5]
Output: 0
```

## Key Idea
Note, for curr number at index `i`, we want to replace this number if `nums[i] > nums[i + 1]`. If we choose to update `nums[i]`, then `nums[i - 1]` may need to update again, thus it gives us a hint to start from back to front.

Now what happens if we need to break `nums[i]` if `nums[i] > nums[i + 1]`. We can try to divide `nums[i]` by `nums[i + 1]` to get the minimum number of operations. What happens to the remainder? It may produce a smaller number i.e. `remainder < nums[i + 1]`. But we can -1 from some number to make `remainder = nums[i + 1] - 1`.

But what if we have `nums[i] = 7` and `nums[i + 1] = 6`? From previous logic, we will have 1 + 6. The most optimal way to achieve it is to divide it by 3 + 4. We can try to do it by `7 / 2`.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Java Solution
- [C++](./solution.cpp)