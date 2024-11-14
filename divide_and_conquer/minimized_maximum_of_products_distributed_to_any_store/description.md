## Divide and Conquer
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 2064

## Problem
You are given an integer `n` indicating there are `n` specialty retail stores. There are `m` product types of varying amounts, which are given as a 0-indexed integer array `quantities`, where `quantities[i]` represents the number of products of the `ith` product type.

You need to distribute all products to the retail stores following these rules:
- A store can only be given at most one product type but can be given any amount of it.
- After distribution, each store will have been given some number of products (possibly `0`). Let `x` represents the maximum number of products given to any store. You want `x` to be as small as possible, i.e., you want to minimize the maximum number of products that are given to any store.

## Example
```
Input: n = 6, quantities = [11, 6]
Output: 3
Explanation: One optimal way is:
- 11 products of type 0 are distributed to the first four stores in these amounts: 2, 3, 3, 3
- 6 products of type 1 are distributed to the other two stores in these amounts: 3, 3
- The maximum number of products given to any store is max(2, 3, 3, 3, 3, 3) = 3
```

## Key Idea
Suppose the question is that, given `n` and `quantities`, and `k`, we want to know after distribution, the maximum of a store can get is at most `k`.

We can simply for each product, assign `k` to each store and remainder to the last store and check if the total stores we need is at most `n`.

Then we can simply use a binary search from `max(quantities)` to `0` and find the minimum possible solution.

## Complexity Analysis
- Runtime Complexity: O(lg max(quantities) * n)
- Space Complexity: O(1)

## Solution
- [Python](./solution.py)