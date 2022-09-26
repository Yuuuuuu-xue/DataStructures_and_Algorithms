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
Let's sort the input array by its width in non-decreasing order. Then simply loop over the sorted array, we will skip over elements with same width and keep the maximum height. Then this question is exactly same as [Longest Increasing Subsequency](./../longest_increasing_subsequence/description.md).

## Complexity Analysis
- Runtime Complexity: O(n lg n)
- Space Complexity: O(n)

## Solution
- [Java Solution](./russian_doll_envelopes.java)
- [C++](./solution.cpp)