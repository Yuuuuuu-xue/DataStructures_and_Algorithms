## Divide and Conquer
Click [here](../notes.md) to go back to the notes page.

## Problem
Given an integer array `nums`, return the number of reverse pairs in the array.

A reverse pair is a pair `(i, j)` where:
- `0 <= i < j < nums.length` and
- `nums[i] > 2 * nums[j]`

## Example
```
Input: nums = [1, 3, 2, 3, 1]
Output: 2
Explanation: The reverse pairs are:
- (1, 4) --> nums[1] = 3, nusm[4] = 1, 3 > 2 * 1
- (3, 4) --> nums[3] = 3, nums[4] = 1, 3 > 2 * 1
```

## Key Idea
We can use a merge sort idea to solve this problem.

In merge sort, we divide the array into left and right then recursive call left and right and return a sorted list.

Then, after left array and right array is sorted. Note every index in right is greater than index of left. Hence, we iterate over the elements, if nums[i] > 2 * nums[j] for i < len(left) and j < len(right), then all index between i and len(left) - 1 works. Hence, we update output counter by += len(left) - i.

If this is not true, then we move to next `i` until it works.

Then, we perform a merge operation in merge sort. We merge two arrays and return a sorted list.

## Complexity Analysis
- Runtime Complexity: O(n lg n)
    - Each operation takes O(n)
    - We divide the array into two parts and two recursive call. Hence, we have at most O(lg n) levels
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)
