## Sorting Algorithms
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Easy 1608

## Problem
You are given an array `nums` of non-negative integers. `nums` is considered special if there exists a number `x` such that there are exactly `x` numbers in `nums` that are greater than or equal to `x`.

Notice that `x` does not have to be an element in `nums`.

Return `x` if the array is special, otherwise, return `-1`. It can be proven that if `nums` is special, the value for `x` is `unique.
## Example
```
Input: nums = [3, 5]
Output: 2
Explanation: There are 2 values (3 and 5) that are greater than or equal to 2.
```

## Key Idea
Since, we want to keep track the number of values greater than some `x`, it provides a hint to sort the input array.

Then we loop over `i` from `0` to `n` (inclusive) and then loop over `m` from `0` to `n - 1`, and keep track the number of values `nums[m] < i`. Then the number of elements `>= i` is equals to `len - m`. If this number equals to `i`, then we can return `i`.

Otherwise return `-1`.

## Complexity Analysis
- Runtime Complexity: O(n lg n + n)
- Space Complexity: O(1)

## Solution
- [Python](./solution.py)
