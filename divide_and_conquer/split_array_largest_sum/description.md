## Divide and Conquer
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Hard 410

## Description
Given an array `nums` which consists of non-negative integers and an integer `m`, you can split the array into `m` non-empty continuous subarrays.

Write an algorithm to minimze the largest sum among these `m` subarrays.

## Example
```
Input: nums = [7, 2, 5, 10, 8], m = 2
Otuput: 18
Explanation:
There are four ways to split nums into two subarrays. The best way is to split it into [7, 2, 5] and [10, 8] where the largest sum among the two subarrays is only 18.

Input: nums = [1, 2, 3, 4, 5], m = 2
```

## Basic Idea
Very similar question to the [Divide Chocolate](../divide_chocolate/description.md). Let `x` be a number in [0, sum(nums)]. Then if we know we can split nums into m subarrays such that the largest sum is at least `x`, then we can immediately discard the solutions from `x` to `sum(nums)`. If the largest sum is above `x`, then we can immediately discard the solutions from `0` to `x`. Thus, we can apply a binary search to solve this problem. Let `left = 0` and `right = sum(nums)` initially and `mid = (left + right) / 2`. Then we can try to divide the array, simply try to divide the array so that each subarray has sum <= `mid`.
- If the group number is exactly same as `m`, then we can try a lower value, thus need to move right pointer.
- If the group number is less then `m`, this means we guess a value is too high and there is a smaller solution exists, thus need to move right pointer.
- If the group number is more then `m`, this means we guess a value is too low and thus need to move left pointer
  
At the end, when `left > right`, we can return our solution as `left`. This is because suppose group number is exactly `m` and `mid` is our optimal solution. Then we know all the number less than `mid` is not going to work. Then we update `right = mid - 1`. And try all the values which will fail since all the number now is less than `mid`. As a consequence, we will always move `left` pointer until `left > right` which will be `right + 1` and thus `mid` is returned.

## Complexity Analysis
- Runtime Complexity: Since we will run the binary search for `x` in `[0, sum(nums)]` and for each binary search, we need to loop over the array `nums` to split the array, and thus `O(n lg(sum(nums)))`.
- Space Complexity: O(1)

## Solution
- [C++](./solution.cpp)