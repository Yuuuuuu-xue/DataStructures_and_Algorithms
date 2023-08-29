# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 2483

## Problem
You are given the customer visit log of a shop represented by a 0-indexed string `customers` consisting only of characters `'N'` and `'Y'`:
- if the `ith` character is `'Y'`, it means that customers come at the `ith` hour
- whereas `'N'` indicates that no customers come at the `ith` hour
  
If the shop closes at the `jth` hour `(0 <= j <= n)`, the penalty is calculated as follows:
- for every hour when the shop is open and no customers come, the penalty increased by `1`
- for every hour when the shop is closed and customers come, the penalty increased by `1`

Return the earliest hour at which the shop muyst be closed to incur a minimum penalty.

Note that if a shop closes at the `jth` hour, it means the shop is closed at the hour `j`.


## Example
```
Input: customers = "YYNY"
Output: 2
Explanation:
- Closing the shop at the 0th hour incurs in 1 + 1 + 0 + 1 = 3 penalty
- Closing the shop at the 1st hour incurs in 0 + 1 + 0 + 1 = 2 penalty
- Closing the shop at the 2nd hour incurs in 0 + 0 + 0 + 1 = 1 penalty
- Closing the shop at the 3rd hour incurs in 0 + 0 + 1 + 1 = 2 penalty
- Closing the shop at the 4th hour incurs in 0 + 0 + 0 + 1 = 1 penalty
Closing the shop at 2nd or 4th hour gives a minimum penalty. Since 2 is earlier, the optimal closing time is 2.
```

## Key Idea
When we choose to close at hour `i` for `0 <= i <= n`, we know that the penalty is nums of `N` in `customers[:i]` + nums of `Y` in `customers[i:]`. To efficient find the values, let `s` = num of `Y` in `customers` and let `currN` be the current number of `N` in `customers[:i]`. Then to find nums of `Y` in `customers[i:]` will be equal to `s - currY = s - (i - currN)`.

Then we iterate over each element and return the earliest hour with minimum penalty.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [C++](./solution.cpp)