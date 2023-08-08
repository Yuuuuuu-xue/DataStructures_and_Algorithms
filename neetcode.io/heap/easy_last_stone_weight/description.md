## LeetCode Problem
Easy 1046

## Description
You are given an array of integers `stones` where `stones[i]` is the weight of the `ith` stone.

We are playing a game with the stones. On each turn, we choose the haviest two stones and smash them together. Suppose the heaviest two stones have weights `x` and `y` with `x <= y`. The result of this smash is:
- If `x == y`, both stones are destroyed
- If `x != y`, the stone of weight `x` is destroyed and the stone of weight `y` has new weight `y - x`.

At the end of the game, there is at most one stone left.
Return the weight of the last remaining stone. If there are no stones left, return `0`.

## Example
```
Input: stones = [2, 7, 4, 1, 8, 1]
Output: 1
Explanation:
- We combine 7 and 8 to get 1, so the array becomes [2, 4, 1, 1, 1]
- We combine 2 and 4 to get 2, so the array becomes [2, 1, 1, 1]
- We combine 2 and 1 to get 1 so the array becomes [1, 1, 1]
- We combine 1 and 1 to get 0 so the array becomes [1] and thus return 1
```

## Basic Idea
Let `pq` be a priority queue with max heap implementation so we can get the top two heaviest two stones efficiently. Then we can combine two stones, if the resulting value > 0, then we can push back into the heap. At the end, stop when heap size is 0 or 1 and return the resulting value.

## Complexity Analysis
- Time Complexity: O(n lg n)
- Space Complexity: O(n)

## Solution
- [C++](./solution.cpp)