## Priority Queue
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Easy 2558

## Problem
You are given an integer array `gifts` denoting the number of gifts in various piles. Every second, you do the following:
- Choose the pile with the maximum number of gifts.
- If there is more than one pile with the maximum number of gifts, choose any
- Leave behind the floor of the square root of the number of gifts in the pile. Take the rest of the gifts

Return the number of gifts remaining after `k` seconds.

## Example
```
Input: gifts = [25, 64, 9, 4, 100], k = 4
Output: 29
Explanation:
- In the first second, take last pile (100) and 10 gifts are left behind
- In the second second, take second pile (64) and 8 gifts are left behind
- In the third second, take first pile (25) and 5 gifts are left behind
- In the fourth second, take last pile (10) and 3 gifts are left behind
```

## Key Idea
We can simply use a max heap to keep track and pop the heap to get the maximum number of gifts and push back the square root to the heap. After all seconds, we loop over the gifts to get gifts left.

## Complexity Analysis
- Runtime Complexity: O(k lg n + n lg n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)