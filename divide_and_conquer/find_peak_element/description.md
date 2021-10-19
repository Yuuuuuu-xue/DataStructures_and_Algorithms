## Binary Search
Click [here](../notes.md) to go back to the notes page.

## Problem
A peak element is an element that is strictly greater than its neighbours.

Given an integer array *nums*, find a peak element, and return its index. If the array contains multiple peaks, return the index to **any of the peaks**.

You may imagine that nums[-1] and nums[n] are all $\infin$. 

## Example
```
Input: nums = [1, 2, 3, 1]
Output: 2
```

## Key Idea
We will first guarantee the array length is greater than or equal to 3.

So if length is 1, then we return 0 since $nums[0]$ is a peak.

If length is 2, then we return 0 if $nums[0] \geq nums[1]$ else we will return 1.

Next, define left = 0 and right = n - 1. And we will perform a binary search.

Let $m = (right + left) // 2$.
1. If $nums[m] > nums[m - 1]$ and $nums[m] > nums[m + 1]$, then we found a peak and we can return m
2. If $nums[m - 1] > nums[m]$, then we know that we must have a peak on the left side, so we can update right to $m - 1$.
3. If $nums[m + 1] > nums[m], then we know that we must have a peak on the right side, so we can update left to $m + 1$.

Repeat the process until $left < right$. At the end, we have $left == right$, and we can simply return nums[left].

## Solution
- [Python Solution](find_peak_element.py)
