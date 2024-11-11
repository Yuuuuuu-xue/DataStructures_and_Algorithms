## Bit Manipulation
Click [here](../notes.md) to go back to the notes page.

## Problem
You are given an array `nums` of non-negative integers and an integer `k`.

An array is called special if the bitwise `OR` of all of its elements is at least `k`.

Return the length of the shortest special non-empty subarray of `nums`, or return `-1` if no special subarray exists.

## Example
```
Input: nums = [2, 1, 8], k = 10
Output: 3
Explanation: 2 | 1 | 8 is 11, thus, we return 3
```

## Key Idea
Note that bitwise OR all the numbers is always increasing, not decreasing. Thus, we can check if `nums[0] | nums[1] | ... nums[n - 1] >= k`, if so, we can return `true`. Then, we can check for a smaller next window `nums[1] | nums[2] | ... | nums[n - 1]`. But how can we get this value without reputing it again? We cannot simply unset bits for `nums[0]` because other numbers may have 1 at this bit. To achieve this, we can use a counter to track each bit counts. To unset `nums[0]`, we can simply decrement the counter and set the bit to 0.

Since we want to find the subarray, we can simply use a sliding window to solve this problem.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [Python](./solution.py)