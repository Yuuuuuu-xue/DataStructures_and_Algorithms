## Fenwick Tree or Binary Indexed Tree
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Hard 315

## Problem
Given an integer array `nums`, return an integer array `counts` where `counts[i]` is the number of smaller elements to the right of `nums[i]`.

Assume -10^4 <= nums[i] <= 10^4

## Example:
```
Input: nums = [5, 2, 6, 1]
Output: [2, 1, 1, 0]
Explanation:
- To the right of 5 there are 2 smaller elements (2 and 1)
- To the right of 2 there is only 1 smaller element (1)
- To the right of 6 there is only 1 smaller element (1)
- To the right of 1 there is no smaller elements
```

## Key Idea
We will use the Fenwick Tree to solve this problem. Let `t` be a Fenwick tree where the indicies are the elements value and values are the occurrences. and we will loop over the elements from right to left. Let `curr` be the current number. To get the number of elements that has a value smaller than curr, we know that is the prefix sum of indies smaller than curr. Then we know, it's `t.getSum(curr - 1)`. Then we can increment a value at index `curr` by 1.

Notice we know the values are between `-10^4` to `10^4`, then the size of the Fenwick tree is at `2 * 10^4 + 1` (+1 for the value 0).

## Complexity Analysis
- We will loop over each element and call the `getSum` and `update` for each iteration, thus the runtime complexity is `O(n lg n)`.
- We will need to store the Fenwick tree which is an array of elements, thus it is `Theta(n)`.

## Solution:
- [C++](solution.cpp)