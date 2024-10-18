## Priority Queue
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 670

## Problem
You are given an integer `num`. You can swap two digits at most once to get the maximum valued number.

Return the maximum valued number you can get.

## Example
```
Input: num = 2736
Output: 7236
Explanation: Swap the number 2 and 7
```

## Key Idea
The simple greedy idea: traverse from the right, if it's largest digit then skip to the next one until the first non last digit, then swap it with the last digit.

To know if current digit is the largest digit, we can simply use a max heap to solve this problem.

If there is multiple largest digits, we want to swap the further right digit with the small digit.

For example, if we have `777717`, we want to swap it as `777771` instead of any other ways.

## Complexity Analysis
- Runtime Complexity: O(n lg n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)