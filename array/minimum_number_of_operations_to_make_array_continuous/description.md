# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Hard 2009

## Problem
You are given an integer array `nums`. In one operation, you can replace any element in `nums` with any integer. `nums` is considered continuous if both of the following conditions are fulfilled:
- All the elements in `nums` are unique
- The difference between the maximum and minimum element in `nums` equals `nums.length - 1`

For example, `nums = [4, 2, 5, 3]` is continuous but `nums = [1, 2, 3, 5, 6]` is not continuous.

Return the minimum number of operations to make `nums` continuous


## Example
```
Input: nums = [4, 2, 5, 3]
Output: 0
Explanation: nums is already continuous

Input: nums = [1, 2, 3, 5, 6]
Output: 1
Explanation: One possible solution: [1, 2, 3, 5, 4]

Input: nums = [1, 10, 100, 1000]
Output: 3
```

## Key Idea
Let's sort the input array and remove any duplicate elements from the array.

Now, we want to build a sorted window from `x` to `x + n - 1` with a length of `n` so the max element - min element = `x + n - 1` - `x` = `n - 1`.

We can simply push items to a queue that represents our window and we keep a variable to keep track the maximum size of this queue.

When we see an item `curr` in the sorted unique list, we check, if `queue.front() - curr < n`, if so, it means it is in the window so we push it to the queue. Otherwise, keep pop the queue until we can push curr to the queue to start a new window.

At the end, `n - maximum size` is the minimum number of operations that we are looking for.

## Complexity Analysis
- Runtime Complexity: O(n lg n)
- Space Complexity: O(n): we can modify the input array but still need `O(n)` for the queue

## Solution
- [C++](./solution.cpp)