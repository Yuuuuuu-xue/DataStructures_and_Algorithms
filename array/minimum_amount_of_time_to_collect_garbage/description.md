# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 2391

## Problem
You are given a 0-indexed array of strings `garbage` where `garbage[i]` represents the assortment of garbage at the `ith` house. `garbage[i]` consists only of the characters `'M'`, `'P'`, and `'G'` representing one unit of metal, paper, and glass garbage respectively. Picking up one unit of any type of garbage takes `1` minute.

You are also given a 0-indexed integer array `travel` where `travel[i]` is the number of minutes needed to go from the `house[i]` to `house[i + 1]`.

There are three garbage trucks in the city, each responsible for picking up one type of garbage. Each garbage truck starts at house `0` and must visit each house in order; however, they do not need to visit every house.

Only one garbage truck may be used at any given moment. While one truck is driving or picking up garbage, the other two trucks cannot do anything.

Return the minimum number of minutes needed to pick up all the garbage.

## Example
```
Input: garbage = ["G", "P", "GP", "GG"], travel = [2, 4, 3]
Output: 21
Explanation:
The paper garbage truck:
- Travels from house 0 to house 1, time += 2
- Collects the paper garbage at house 1, time += 1
- Travels from house 1 to house 2, time += 4
- Collects the paper garbage at house 2, time += 1
- Thus it takes 2 + 1 + 4 + 1 = 8
The glass garbage truck
- Collects the glass garbage at house 0, time += 1
- Travels from house 0 to house 1, time += 2
- Travels from house 1 to house 2, time += 4
- Collects the glass garbage at house 2, time += 1
- Travels from house 2 to hosue 3, time += 3
- Collects the glass garbage at house 3, time += 2
- Thus it takes 1 + 2 + 4 + 1 + 3 + 2 = 13
No metal garbage thus no need to consider metal garbage
Thus it takes 8 + 13 = 21
```

## Key Idea
If we want to travel to house at `x`, then we have to travel from house `0` to `1` to ... to `x - 1` to `x`.

Thus, let `m`, `g`, and `p` be the last house index for each last index of the house that has the `M`, `G`, `P`.

Then we can simply loop from `i` to `0` to `m`, then add the `time[i]` and add the time to the output, and for each `i` also count the occurrence of `M` in the corresponding house.

## Complexity Analysis
- Runtime Complexity: O(n * x) where x is the maximum string length in each house
- Space Complexity: O(1)

## Solution
- [C++](./solution.cpp)