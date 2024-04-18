## Monotonic Stack
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Easy 1475

## Problem
You are given an integer array `prices` where `prices[i]` is the price of the `ith` item in a shop.

There is a special discount for items in the shop. If you buy the `ith` item, then you will receive a discount equivalent to `prices[j]` where `j` is the minimum index such that `j > i` and `prices[j] <= prices[i]`. Otherwise, you will not receive any discount at all.

Return an integer array `answer` where `answer[i]` is the final price you will pay for the `ith` item of the shop, considering the special discount.

## Example
```
Input: prices = [8, 4, 6, 2, 3]
Output: [4, 2, 4, 2, 3]
Explanation:
- For item 0, price = 8, next min price = 4, thus final = 8 - 4 = 4
- For item 1, price = 4, next min price = 2, thus final = 4 - 2 = 2
- For item 2, price = 6, next min price = 2, thus final = 6 - 2 = 4
- For item 3, price = 2, next min price = 0, thus final = 2
- For item 4, price = 3, next min price = 0, thus final = 3
```

## Key Idea
Since we want to find the next smallest element, it provides a hint to loop over the elements from back to front and use a monotonic increasing stack to solve this problem.

For each number `x`, we pop all the elements `>= x`. If the stack is not empty, the last item in the stack is the discount and we can calcaulte the final price. If it is empty, then there is no discount.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)
