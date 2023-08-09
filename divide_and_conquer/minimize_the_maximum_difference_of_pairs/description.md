## Divide and Conquer
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 2616

## Description
You are given a 0-indexed integer array `nums` and an integer `p`. Find `p` pairs of indicies of `nums` such that the maximum difference amongst all the pairs is minimized. Also, ensure no index appears more than once amongst the `p` pairs.

Note that for a pair of elements at the index `i` and `j`, the difference of this pair is `|nums[i] - nums[j]|` where `|x|` represents the absolute value of `x`.

Return the minimum maximum difference among all `p` pairs. We define the maximum of an empty set to be zero.

## Example
```
Input: nums = [10, 1, 2, 7, 1, 3], p = 2
Output: 1
Explanation: The first pair is formed from the indices 1 and 4, and the second pair is formed from the indicies 2 and 5. THe maximum difference is max(|nums[1] - nums[4]|, |nums[2] - nums[5]|) = max(0, 1) = 1. Therefore, we return 1.

Input: nums = [4, 2, 1, 2], p = 1
Output: 0
```

## Basic Idea
We will solve this problem via binary search. We know that the range of the maximum value is in between [0, max(nums) - min(nums)]. We can use binary search, starting with mid value, if it works, then we move the left side [left, mid] otherwise we move to the right side [mid + 1, right]. Given a `mid`, we check if we can find `p` pairs by sorting the array and check if two pairs next to each other, the absolute difference is less than or equal to `mid`, if so, we find one pair. 

## Complexity Analysis
- Runtime Complexity:
  - O(n lg n) to sort the array
  - O(n lg m) where m is the max(nums) - min(nums)
- Space Complexity:
  - O(1) we can sort the input array in place

## Solution
- [C++](./solution.cpp)