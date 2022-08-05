## LeetCode Problem
Hard 84

## Description
Given an array of integers `heights` representing the historgram's bar height where the width of each bar is `1`, return the area of the largest rectangle in the histogram.

## Example
```
Input: heights = [2, 1, 5, 6, 2, 3]
Output: 10
Explanation: The largest rectangle is from index 2 to index 3, which has an area = 10 units.

Input: heights = [2, 4]
Output: 4
```

## Basic Idea
Notice for above example, if we have two bar with height 5 and 10 before the bar with height 2. Then, the minimum height of those three bars will be 2 and width is 3. Thus, let `s` be a stack of pairs (index, minHeight) which represents all the bars starting from index has a minimum height (minHeight) to the next element in the stack or current index `i`. So we can iterate `i` from 0 to n, for each iteration:
1. We pop out all elements from the stack that has minHeight > height[i]. Record the leftmost index. For each pull out, we need to update the final solutio with this area (without including current bar). This is because suppose we have [1, 2, 2, 0], if we at value 0, it will pull the pair of index 1 with height 2, so two bars with minHeight 2. Next pull will be index 0 with height 1 so 3 bars with min height 1.
3. Push a pair (leftmost index, minHeight (including current bar)) into the stack. This pair represents the minHeight in [leftmostIndex, i].

What if we have heights = [2, 3]. When we exit the loop, the stack will contain [[0, 2], [1, 3]]. The trick here is to push a value 0 to the heights, so at the end, we have a value 0 and can pull all the elements out of the stack and update the final solution with correct value.

## Solution
- [C++](./solution.cpp)