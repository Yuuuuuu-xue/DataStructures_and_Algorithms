## Priority Queue
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Easy 3318

## Problem
You are given an array `nums` of `n` integers and two integers `k` and `x`.

The x-sum of an array is calculated by the following procedure:
- Count the occurrences of all elements in the array
- Keep only the occurrences of the top `x` most frequent elements. If two elements have the same number of occurrences, the element with the bigger value is considered more frequent.
- Calculate the sum of the resulting array.

Note that if an array has less than `x` distinct elements, its x-sum is the sum of the array.

Return an integer array `answer` of length `n - k + 1` where `answer[i]` is the x-sum of the subarray `nums[i..i+k-1]`.

## Example
```
Input: nums = [1, 1, 2, 2, 3, 4, 2, 3], k = 6, x = 2
Output: [6, 10, 12]
Explanation:
- For subarray [1, 1, 2, 2, 3, 4], only elements 1 and 2 will be kept in the resulting array. Hence answer[0] = 1 + 1 + 2 + 2
- For subarray [1, 2, 2, 3, 4, 2], only elements 2 and 4 will be kept in the resulting array. Hence answer[1] = 2 + 2 + 2 + 4
- For subarray [2, 2, 3, 4, 2, 3], only elements 2 and 3 are kept in the resulting array. Hence answer[2] = 2 + 2 + 2 + 3 + 3
```

## Key Idea
We can simply use a sliding window to keep track the frequency of each element in the each subarray.

Then we can simply use a heap to solve this problem. Given `k` elements and we want to find most frequent `x` elements, we can use a min heap with `x` elements.

## Complexity Analysis
- Runtime Complexity:
    - Need to run at most n subarrays
    - For each subarray, we need to run n * lg x
    - Hence O(n * n * lg x)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)