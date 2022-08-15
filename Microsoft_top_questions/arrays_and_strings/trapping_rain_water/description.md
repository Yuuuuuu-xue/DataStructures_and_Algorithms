## LeetCode Question
Hard 42

## Description
Given `n` non-empty integers representing an elevation map where the width of each bar is `1`, compute how much water it can trap after raining.

## Example
```
Input: height = [0, 1, 0, 2, 1, 0, 3, 2, 1, 2, 1]
Output: 6
```

## Key Idea
Notice, we can fill up the water at position x iff the height[x] < min(highest bar on the left side, highest bar on the right side). Then, the number of units of water it can fill is min(highest bar on the left side, highest bar on the right side).

Let `left` and `right` be two positions that can fill up the water with initial value `1` and `n - 2`. Then we check, if highestLeft <= hightestRight, if so, then we check if height[left] < highestLeft, if so we can fill the water otherwise highestLeft = height[left]. And vice versa.

## Complexity Analysis
- Time complexity: O(n)
- Space complexity: O(1)

## Solution
- [C++](solution.cpp)