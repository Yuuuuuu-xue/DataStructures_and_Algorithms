## Priority Queue
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 2593

## Problem
You are given an array `nums` consisting of positive integers.

Starting with `score = 0`, apply the following algorithm:
- Choose the smallest integer of the array that is not marked. If there is a tie, choose the one with the smallest index
- Add the value of the chosen integer to `score`
Mark the chosen element and its two adjacent elements if they exist
- Repeat until all the array elements are marked

Return the score you get after applying the above algorithm.

## Example
```
Input: nums = [2, 1, 3, 4, 5, 2]
Output: 7
Explanation:
- We mark 1 as the smallest element, so we mark it and its two adjacent elementss 2 and 3
- Then 2 is the smallest unmarked element, so we mark it and its left adjacent element [2, 1, 3, 4, 5, 2]
- Then 4 is the only remaining unmarked element, so we mark it: [2, 1, 3, 4, 5, 2]
```

## Key Idea
We can simply use a heap so we can alway get the smallest element and mark the element as negative.

When pop an element, if that element is marked, we do nothing. Otherwise we mark the adjacent elements.

We can get adjacent element by pushing the value with its index (tuple) to the heap.

We can mark an element by use its index and set the original value in the arra to negative since we can assume `1 <= nums[i]`.

## Complexity Analysis
- Runtime Complexity: O(n lg n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)