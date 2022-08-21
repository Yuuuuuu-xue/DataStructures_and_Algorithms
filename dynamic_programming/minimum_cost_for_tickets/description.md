## Dynamic Programming
Click [here](../../dynamic_programming/notes.md) to go back to the notes page.

## LeetCode Problem
Medium 983

## Problem
You have planned some train traveling one year in advance. The days of the year in which you will travel are given as an integer array `days`. Each day is an integer from `1` to `365`.

Train tickets are sold in three different ways:
- a 1-day pass is sold for `costs[0]` dollars
- a 7-day pass is sold for `costs[1]` dollars
- a 30-day pass is sold for `costs[2]` dollars

The passes allow that many days of consecutive travel.
- For example, if we get a 7-day pass on day `2`, then we can travel for `7` days: `2, 3, 4, 5, 6, 7, 8`.

Return the minimum number of dollars you need to travel every day in the given list of days.

You can assume `days` are strictly increasing order.

## Example
```
Input: days = [1, 4, 6, 7, 8, 20], costs = [2, 7, 15]
Output: 11
Explanation: For example, here is one way to buy passes that lets you travel with your travel plan:
- On day 1, you bought a 1-day pass for costs[0] = $2, which covered day 1
- On day 2, you bought a 7-day pass for costs[1] = $7, which covered days 3, 4, ..., 9
- On day 20, you bought a 1-day pass for costs[0] = $2, which covered day 20
- In total, you spent $11 and covered all the days of your travel

Input: days = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 30, 31], costs = [2, 7, 15]
Output: 17
Explanation: For example, here is one way to buy passes that lets you travel with your travel plan:
- On day 1, you bought a 30-day pass for costs[2] = $15, whcih covered day 1, 2, ..., 30
- On day 31, you bought a 1-day pass for costs[0] = $2, which covered day 31
- In total, you spent $17 and covered all the days of your travel
```

## Key Idea
Let `dp[i]` be the minimum costs that ends at current day `days[i]`. Then we know `dp[n - 1]` will be the final solution. For any `i`, we have 3 choices:
- Buy a 1-day pass, then `dp[i] = costs[0] + dp[i - 1]`
- Buy a 7-day pass, then `dp[i] = costs[1] + dp[j]` where j is the closet day such that is 7 days ago from `day[i]`, 0 if such day not exists
- Buy a 30-day pass, then `dp[i] = costs[2] + dp[k]` where k is the closet day such that is 30 days ago from `day[i]`, 0 if such day not exists

Now, since we can assume all the `days` are strictly increasing, then we can keep two pointers `j` and `k` so keep track of the 7 days and 30 days ago.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [C++](solution.cpp)