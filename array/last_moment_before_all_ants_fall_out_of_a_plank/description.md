# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 1503

## Problem
We have a woodern plank of the length `n` units. Some ants are walking on the plank, each ant moves with a speed of 1 unit per second. Some of the ants move to the left and the other move to the right.

When two ants moving in two different directions meet at some point, they change their directions and continue moving again. Assume changing directions does not take any additional time.

When an ant reaches one end of the plank at a time `t`, it falls out of the plank immediately.

Given an integer `n` and two integer arrays `left` and `right`, the positions of the ants moving to the left and right, return the moment when the last ant(s) fall out of the plank.

## Example
```
Input: n = 4, left = [4, 3], right = [0, 1]
Output: 4
```

## Key Idea
When two ants meet, they change direction and continue move. i.e.

A(->)   (<- B)
then
   A(<-)(->)B
When A and B meets, A will continue moving but with B's direction, thus A's distance = A first half + B second half. Similarly, B's distance = B first half + A second half.

Suppose when they meet, A and B change directions, but there is no difference between those two ants, we can swap A and B so A continues to move in its original direction, same for B.

Thus, for left, it takes `i` time and for right, it takes `n - j` time.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [C++](./solution.cpp)