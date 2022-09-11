## Priority Queue
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Hard 1383

## Description
You are given two integers `n` and `k` and two integer arrays `speed` and `efficiency` both of length `n`. There are `n` engineers numbered from `1` to `n`. `speed[i]` and `efficiency[i]` represent the speed and efficiency of the `ith` engineer respectively.

Choose at most `k` different engineers out of the `n` engineers to form a team with the maximum performance.

The performance of a team is the sum of their engineers' speeds multipled by the minimum efficiency among their engineers.

Return the maxium performance of this tteam. Since the answer can be a huge number, return it modulo `10^9 + 7`.

## Example
```
Input: n = 6, speed = [2, 10, 3, 1, 5, 8], efficiency = [5, 4, 3, 9, 7, 2], k = 2
Output: 60
Explanation:
- Select engineer 2 with speed=10 and efficiency=4
- Select engineer 5 with speed=5 and efficiency=7
- Then the performance = (10 + 5) * min(4, 7) = 60

Input: n = 6, speed = [2, 10, 3, 1, 5, 8], efficiency = [5, 4, 3, 9, 7, 2], k = 3
Output: 6
```

## Basic Idea
Let's sort the input array by efficiency in decreasing order. Then we can loop over each engineer by its efficiency and to calculate the current performance, we know the current engineer's efficient will be the lowest value. Then we need to keep track the previous speed. If the number of engineers of the team is greater than k, we need to remove an engineer that has the minimum speed and multiply it by the current efficiency. For each iteration, store the maximum value.

Note, it is possible that the minimum speed is current engineer and we still use the current minimum efficiency. However, it does not matter because it implies that the maximum performance of considering previous engineer > the current performance and we already keep track the maximum performance.

## Complexity Analysis
- Runtime Complexity: O(n lg n)
	- Need to zip the speed and efficiency, thus O(n)
	- Loop over each engineer and update the speed with a heap, thus O(n lg n)
- Space Complexity: O(n)

## Solution
- [C++](./solution.cpp)