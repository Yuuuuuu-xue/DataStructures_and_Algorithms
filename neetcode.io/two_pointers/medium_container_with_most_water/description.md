## LeetCode Problem
Medium 11

## Description
You are given an integer array `height` of length n. There are n vertical lines drawn such the two endpoints of the `ith` line are `(i, 0)` and `(i, height)`. Find two lines that together with the x-axis form a container, such taht the container contains the most water. Retur nthe maximum amount of water a container can store. Notice that you may not slant the container.

## Example
```
Input: height = [1, 8, 6, 2, 5, 4, 8, 3, 7]
Output: 49

Input: height = [1, 1]
Output: 1
```

## Basic Idea
The key idea of this question is that the area of water depends on the minimum height among the two outer bar. Therefore, we can use two pointers to solve this question. Let left and right be two pointers. We can calculate the area of that by taking
- height = min(height[left], height[right])
- width = right - left
Notice if we have height[i] <= minHeight (for i > left), then we can simply skip those values. Similarly, if we have height[i] < minHeight, we can also skip those values.

## Solution
- [C++](./solution.cpp)