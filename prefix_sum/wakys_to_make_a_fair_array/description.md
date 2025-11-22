# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## Problem
You are given an integer array `nums`. You can choose exactly one index (0-indexed) and remove the element. Notice that the index of the elements may change after the removal.

For example, if `nums = [6, 1, 7, 4, 1]`:
- Choosing to remove index `1` results in `nums = [6, 7, 4, 1]`
- Choosing to remove index `2` results in `nums = [6, 1, 4, 1]`
- Choosing to remove index `4` results in `nums = [6, 1, 7, 4]`

An array is fair if the sum of the odd-indexed values equals the sum of the even-indexed values.

Return the number of indices that you could choose such that after the removal, `nums` is fair.

## Example:
```
Input: nums = [2, 1, 6, 4]
Output: 1
Explanation:
- Remove index 0, then [1, 6, 4], even sum = 1 + 4 = 5, odd sum = 6, not fair
- Remove index 1, then [2, 6, 4], even sum = 2 + 4 = 6, odd sum = 6, fair
- Remove index 2, then [2, 1, 4], even sum = 2 + 4 = 6, odd sum = 1, not fair
- Remove index 3, then [2, 1, 6], even sum = 2 + 6 = 8, odd sum = 1, not fair
```

## Key Idea
Note the key issue is that, after remove the element, the index of the elements may change based on the index we remove.

For instance, if `i` is the index we remove, then if i is an even number, then i + 1 is odd and i + 2 is even. However, if we remove i, then i + 1 is even and i + 2 is odd.

It does not change for index < i.

So basically, given an index `i`, we want to know the sum < i for both even and odd indexes and sum > i for both even and odd indexes. We can simply use a prefix array to solve this problem

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)