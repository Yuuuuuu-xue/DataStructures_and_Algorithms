## LeetCode Problem
Hard 42

## Description
Given `n` non-negative integers representing an elevation map where the width of each bar is `1`, compute how much water it can trap after raining.

## Example
```
Input: height = [0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1]
Output: 6

Input: height = [4, 2, 0, 3, 2, 5]
Output: 9
```

## Basic Idea
The key idea of this question is to get how much water a block can trap the water, it depends on the minimum height of 
1. highest height of the bar on it's left side
2. highest height of the bar on it's right side
We can compute two arrays which represent the highest height of the bar on the left side and highest height of the bar on the right side, however this takes O(n) space. To solve this question with time complexity of O(n) and space complexity of O(1), we will use two pointer technique. Let left and right be two pointers and maxLeftHeight and maxRightHeight be two heights with highest values with initial values:
- left = 1 and right = n - 2
- maxLeftHeight = height[0]
- maxRightHeight = height[n - 1]

Then while left <= right, we check if:
- height[left] <= min(maxLeftHeight, maxRightHeight), then add min(maxLeftHeight, maxRightHeight) to the output solution and increment left by 1.
- height[left] > maxLeftHeight, then update the maxLeftHeight.
- height[right] <= min(maxLeftHeight, maxRightHeight), then add min(maxLeftHeight, maxRightHeight) to the output solution and decrement right by 1.
- height[right] > maxRightHeight, then update the maxRightHeight.

## Solution
- [C++](./solution.cpp)