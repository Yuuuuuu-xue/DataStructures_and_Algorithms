## Greedy Algorithm
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Hard 135

## Problem
There are `n` children standing in a line. Each child is assigned a rating value given in the integer array `ratings`.

You are giving candies to these children subjected to the following requirements:
- Each child must have at least one candy
- Children with a higher rating get more candies than their neighbors
Return the minimum number of candies you need to have to distribute the candies to the children

## Example:
```
Input: ratings = [1, 0, 2]
Output: 5
Explanation: candies = [2, 1, 2]

Input: ratings = [1, 2, 2]
Output: 4
Explanation: [1, 2, 1]
```

## General Idea:
Let's solve this problem via Greedy algorithm. Our greedy strategy is that we compute `left = ` list of candies given to the children with a higher rating to their left neighbor. Similarly, we compute `right` and return `[max(left_i, right_i)]`.

We can initialize `candies = [1, ..., 1]` then iterate over for left, update `candies[i]` if necessary and similarly for `right`. This way, we can reduce the space complexity from `O(2n)` to `O(n)`

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [C++](./solution.cpp)
