## Dynamic Programming
Click [here](../../dynamic_programming/notes.md) to go back to the notes page.

## LeetCode Problem
Hard 354.

## Problem
You are given a 2D array of integers ```envelopes``` where ```envelopes[i] = [w_i, h_i]``` represents the width and the height of an envelope.

One envelope can fit into another if and only if both the width and height of one envelope are greater than other envelope's width and height.

Return the maximum number of envelopes you can Russian doll (put one inside the other).

## Example
```
Input: envelopes = [[5, 4], [6, 4], [6, 7], [2, 3]]
Output: 3
Explanation: The maxmimum number of envelopes you can Russian doll is 3: [2, 3] => [5, 4] => [6, 4]

Input: envelopes = [[1, 1], [1, 1], [1, 1]]
Output: 1
```

## Key Idea
We will use dynamic programming to solve this problem. We will first sort the input array by their width in non-decreasing order, if they have the same width, then sort the height in non-increasing order. For instance, [[3, 4], [3, 6]] will be sorted to [[3, 6], [3, 4]]. Then the width does not matter since it's sorted and we only need to think about the array of height. For isntance, given an array of [0, 3, 1, 6, 2, 2, 7], we want to find a longest increasing subsequence (LeetCode Medium 300). A subsequence is a sequence that can be derived from an array by deleting some or no elements without changing the order of remaining elements. Note if same width, we sort the height in non-decreasing order because if in non-increasing order, then for instance, [[3, 4], [3, 6]], we will have [3, 6] and it will be a subseqeunce of length 2. But if we change the order, [6, 3], then the longest subsequence has a longth of 1 and that's exacly what we want. Now given an array of [0, 3, 1, 6, 2, 2, 7], how do we find the longest increasing subsequence? Let dp[i] be the i_th smallest elements we have seen so far, for an element x, we will perform a binary search (bisect left) of dp to find the index i and set dp[i] to x, it no elements are smaller than the given element x, we increase the subsequence adn update the length. The length will be the final solution.

## Solution
- [Java Solution]