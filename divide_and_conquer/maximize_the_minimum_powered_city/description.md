## Divide and Conquer
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Hard 2528

## Problem
You are given a 0-indexed integer array `stations` of length `n`, where `stations[i]` represents the number of power stations in the `ith` city.

Each power station can provide power to every city in a fixed range. In other words, if the range is denoted by `r`, then a power station at city `i` can provide power to all cities `j` such that `|i - j| <= r` and `0 <= i, j <= n - 1`.

The power of a city is the total number of power stations it is being provided power from.

The government has sanctioned building `k` more power stations, each of whcih can be built in any city, and have the same range as the pre-existing ones.

Given the two integers `r` and `k`, return the maximum possible minimum power of a city, if the additional power stations are built optimally.

Note you can build the `k` power stations in multiple cities.

## Example
```
Input: stations = [1, 2, 4, 5, 0], r = 1, k = 2
Output: 5
Explanation:
One of the optimal ways is to install both the power stations at city 1. So stations will become [1, 4, 4, 5, 0].
- City 0 is provided by 1 + 4 = 5 power stations
- City 1 is provided by 1 + 4 + 4 = 9 power stations
- City 2 is provided by 4 + 4 + 5 = 13 power stations
- City 3 is provided by 5 + 4 = 9 power stations
- City 4 is provided by 5 + 0 = 5 power stations
```

## Key Idea
Note, if the optimal solution is x, then it means any value less than x also works. Note, the optimal solution is bounded between 0 and max(powers of initial stations at each city) + k.

Hence, it provides a hint to use binary search to search between those values.

Now, we need to see if we can solve this subproblem optimally: given stations, r, k, and x, return true if after building `k` power stations, each city has at least `x` powers.

To solve this subproblem, we can take powers of each cities from the initial stations, and for any city less than `x`, we build the `x - i` power stations at index `min(i + r, n - 1)`. Then, we update the power station list. However, this updating power station list may take O(n) time. If we do it for each element, then it takes O(n^2).

We can simply use an array to track the total power station added. `total_added`

For each `i`, we update `total_added[i] = total_added[i - 1]`. Then, if add `x - i` power stations at index `j = min(i + r, n - 1)`, then define index `k = min(i + 2*r, n - 1)`. Then, we update `total_added[i] += x - i` and `total_added[k + 1] -= x - i`.


## Complexity Analysis
- Runtime Complexity:
 - We will need to run lg(sum(stations)) times
 - For each operation, it takes O(n)
- Space Complexity: O(1)

## Solution
- [Python](./solution.py)