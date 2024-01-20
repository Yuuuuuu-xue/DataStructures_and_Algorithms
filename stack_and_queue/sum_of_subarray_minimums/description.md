## Stack and Queue
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 907

## Description
Given an array of integers arr, find the sum of `min(b)`, which `b` ranges over every (continguous) subarray of `arr`. Since the answer may be large, return the answer modulo `10 ** 9 + 7`.

## Example
```
Input: arr = [3, 1, 2, 4]
Output: 17
Explanation: subarrays are [3], [1], [2], [4], [3, 1], [1, 2], [2, 4], [3, 1, 2], [1, 2, 4], [3, 1, 2, 4]. Minimums for each subarrays are 3, 1, 2, 4, 1, 1, 2, 1, 1, 1 and sum is 17.
```

## Key Idea
For `arr[i]`, let `left[i]` be the index of the first element smaller element left of `arr[i]` and let `right[i]` be the first element smaller than `arr[i]` and is rigth of `arr[i]`.

The the number of subarrays with `arr[i]` be the smallest value will be `(i - left[i]) * (right[i] - i)` and thus the minimum sum += `(i - left[i]) * (right[i] - i) * arr[i]`.

We will use the monotonic stack to solve this problem. Let `s` be a stack, we will iterate over the array to compute `left` and `right`. Iterate over the array from left to right, for each element, while the stack is not empty and top element `>= current element`, pop the element from the stack. And thus, it guarantees the stack is in strictly decreasing orde.

Then `left[i] = top of stack` and push `i` to the stack.

Then another loop to compute the `right`.

## Complexity Analaysis
- The time complexity is O(n)
- The space complexity is O(n)

## Solution
- [C++](./solution.cpp)