# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Question
Medium 624

## Problem
You are given `m` `arrays`, where each array is sorted in ascending order.

You can pick up two integers from two different arrays (each array picks one) and calculate the distance. We define the distance between two integers `a` and `b` to be their absolute difference `|a - b|`.

Return the maximum distance.

## Example
```
Input: arrays = [[1, 2, 3], [4, 5], [1, 2, 3]]
Output: 4
Explanation: One way to reach the maximum distance 4 is to pick 1 in the first or third array and pick 5 ain the second array.
```

## Key Idea
Since each individual array is sorted, we know the minimum of that array is at index 0 and maximum is at index `-1`.

Thus, we can keep track of the minimum and maximum we have seen, as `curr_min` and `curr_max` which has an initial value of `array[0][0]` and `array[0][-1]`.

Since we cannot use minimum and maximum from the same array, we can keep track of the maximum difference by travelling the array `curr_array` and update the maximum difference as `max(abs(curr_max - curr_array[0]), abs(curr_min - curr_array[-1]), max_diff)`.

## Complexity Analysis
- Time Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [Python](./solution.py)