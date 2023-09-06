## LeetCode Problem
Medium 134

## Description
There are `n` gas stations along a circular route, where the amount of gas at the `ith` station is `gas[i]`.

You have a car with an unlimited gas tank and it costs `cost[i]` of gas to travel from the `ith` station to its next `(i + 1)th` station. You begin the journey with an empty tank at one of the gas stations.

Given two integer array `gas` and `cost`, return the starting gas station's index if you can travel around the circuit once in the clockwise direction, otherwise return `-1`. If there exists a solution, it is guaranteed to be unique.

## Example
```
Input: gas = [1, 2, 3, 4, 5], cost = [3, 4, 5, 1, 2]
Output: 3
Start at station 3 (index 3):
- curr gas at index 3 = 0 + 4 - 1 = 3
- curr gas at index 4 = 3 + 5 - 2 = 6
- curr gas at index 0 = 6 + 1 - 3 = 4
- curr gas at index 1 = 4 + 2 - 4 = 2
- curr gas at index 2 = 2 + 3 - 5 = 0
```

## Basic Idea
Note, if `gas[i] >= cost[i]`, then `i` is a possible solution. We can just traverse the rest of the array and check if the solution exists or not. We can do it by simply traverse the rest of the position.

However, this will end up with TLE. Now if we keep track of `currGas += gas[i] - cost[i]`, what happens if `currGas < 0`? Then all, the indices `i, ..., j` we have visited so far are not valid solution. Suppose `i + 1` works then `i` must also work. Otherwise, we know that `currGas < 0` when we reach to `i` and will not consider `i + 1` yet.

Thus the possible solution may be `j + 1`, but must not be `i, ..., j`.

We can iterate over the `0 <= i < n`, let `totalGas += gas[i]`, `totalCost += cost[i]`, and `currGas += gas[i] - cost[i]` and `possibleSolution = 0` initially. If `currGas < 0`, then we know `possibleSolution` may be `i + 1` and we can reset `currGas = 0`. At the end, if `totalGas < totalCost`, then we know the solution must not exist otherwise the `possibleSolution` is the solution that we are looking for.

## Complexity Analysis
- Runtime Complexty: O(n)
- Space Complexity: O(1)

## Solution
- [C++](./solution.cpp)