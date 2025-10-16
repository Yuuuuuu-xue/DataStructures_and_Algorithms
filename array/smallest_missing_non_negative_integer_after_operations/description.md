# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## Problem
You are given a 0-indexed integer array `nums` and an integer `value`.

In one operation, you can add or subtract `value` from any element of `nums`.
- For example, if `nums = [1, 2, 3]` and `value = 2`, you can choose to subtract `value` from `nums[0]` to make `nums = [-1, 2, 3]`.

The MEX (minimum excluded) of an array is the smallest missing non-negative integer in it.
- For example, the MEX of `[-1, 2, 3]` is `0` while the MEX of `[1, 0, 3]` is `2`.

Return the maximum MEX of `nums` after applying the mentioned operation any number of times.

## Example
```
Input: nums = [1, -10, 7, 13, 6, 8], value = 5
Output: 4
Explanation: One can achieve this result by applying the following operations:
- Add the value to nums[1] to make nums = [1, 0, 7, 13, 6, 8]
- Subtract value from nums[2] once to make nums = [1, 0, 2, 13, 6, 8]
- Subtract value from nums[3] twice to make nums = [1, 0, 2, 3, 6, 8]
The MEX of nums is 4. It can be shown that 4 is the maximum MEX we can achieve.
```

## Key Idea
Note, for any number that we can apply the operations with result = 0 will be `num % value == 0`. For example, if value = 5, then for values like -10, 5, -20, we can apply operations and result in any number that is multiple of 5, i.e. 50.

Hence, we can simply iterate over the nums and calculate the remainder and store the frequency.

At the end, the minimum remainder value with minimum frequency will be the remainder, and the value that we are looking for will be freq * value + remainder.

## Complexity
- Time Complexity: O(n + value)
- Space Complexity: O(value)

## Solution
- [Python](./solution.py)