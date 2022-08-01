## LeetCode Problem
Medium 347

## Description
Given an integer array `nums` and an integer `k`, return the `k` most frequent elements. You may return the answer in **any order**. It is guaranteed that the answer is unique.

## Example
```
Input: strs = ["eat", "tea", "tan", "ate", "nat", "bat"]
Output: [["bat"], ["nat", "tan"], ["ate", "eat", "tea"]]
```

## Basic Idea
For this problem, we will use a hashmap that maps the frequency to a list of numbers that has this frequency. Then simply starts with k and loop over each frequency starting with input array size, and check if currFreq is in the map or not. If so, add all the numbers into output since it is guarnateed that the answer is unique. And update k -= map[currFreq].length and decrement currFreq by 1. If currFreq is not in the map, then decrement currFreq by 1.

## Solution
- [C++](./solution.cpp)