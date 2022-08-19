## LeetCode Question
Medium 453

## Description
Given an integer array `nums` of size `n`, return the minimum number of moves required to make all array elements equal.

In one move, you can increment `n - 1` elements of the array by `1`.

## Example
```
Input: nums = [1, 2, 3]
Output: 3
Explanation: Only three moves are needed where each move increments two elements: [1, 2, 3] -> [2, 3, 3] -> [4, 4, 4]
```

## Key Idea
Really interesting question. The key idea of this question is that increment `n - 1` elements is equilvalent to decrement 1 element. So for each iteration, we should increment `n - 1` elements where the one element not incremented is the maximum. It is equilvalent to decrement 1 element (the one with maxinimum value). Then the question becomes really easy. We can simply reduce all the element to the minimum elements and store the number of moves.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [C++](solution.cpp)