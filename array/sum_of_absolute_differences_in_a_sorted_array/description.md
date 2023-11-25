# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 1685

## Problem
You are given an integer array `nums` sorted in non-decreasing order.

Build and return an integer array `result` with the same length as `nums` such that `result[i]` is equal to the summation of absolute differences between `nums[i]` and all the other elements in the array.

In other words, `result[i]` is equal to `sum(|nums[i] - nums[j]|)` where `0 <= j < nums.length` and `j != i`.

## Example
```
Input: nusm = [2, 3, 5]
Output: [4, 3, 5]
Explanation:
- result[0] = |2 - 2| + |2 - 3| + |2 - 5| = 0 + 1 + 3 = 4
- result[1] = |3 - 2| + |3 - 3| + |3 - 5| = 1 + 0 + 2 = 3
- result[2] = |5 - 2| + |5 - 3| + |5 - 5| = 3 + 2 + 0 = 5
```

## Key Idea
Since we can assume the `nums` is sorted in non-decreasing order. This means, for an integer `i`, all the number with index `< i` is less than `nums[i]`, and all the number with index `> i` is larger than or equal to `nums[i]`. Thus, the absolute value will be `nums[i] - nums[0] + nums[i] - nums[1] + ... + nums[i] - nums[i - 1] = i * nums(i) - (nums[0] + nums[1] + ... + nums[i - 1])`. And the other part will be `nums[i + 1] - nums[i] + nums[i + 2] - nums[i] + ... + nums[n - 1] - nums[i] = (nums[i + 1] + nums[i + 2] + ... + nums[n - 1]) - (n - 1 - i) * nums[i]`. Thus, we need to calculate prefix and suffix. 

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [C++](./solution.cpp)