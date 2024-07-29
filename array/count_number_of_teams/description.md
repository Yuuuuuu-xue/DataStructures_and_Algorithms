# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 1395

## Problem
There are `n` soliders standing in a line. Each solider is assigned a unique `rating` value.

You have to form a team of 3 soliders amongst them under the following rules:
- Choose 3 soliders with index (`i`, `j`, `k`) with rating `(rating[i], rating[j], rating[k])`
- A team is valid if `rating[i] < rating[j] < rating[k]` or `rating[i] > rating[j] > rating[k]` where `0 <= i < j < k < n`.

Return the number of teams you can form given the conditions. Soliders can be part of multiple teams.
 
## Example
```
Input: rating = [2, 5, 3, 4, 1]
Output: 3
Explanation: we can form three teams given the conditions: (2, 3, 4), (5, 4, 1), (5, 3, 1)
```

## Key Idea
We can simply find the mid element. Then we can loop over the left and right elements and keep track of the number of elements smaller and larger than the mid element.

Then the number of teams that include this mid element `curr` will be
- number of elements on the left side that is smaller than `curr` multiply by number of elements on the right side that is larger than `curr`
- number of elements on the left side that is larger than `curr` multiply by number of elements on the right side that is smaller than `curr`

## Complexity Analysis
- Runtime Complexity: O(n ^ 2)
- Space Complexity: O(1)

## Solution
- [Python](./solution.py)