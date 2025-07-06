## Hashing
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 1865

## Problem
You are given two integer arrays `nums1` and `nums2`. You are tasked to implement a data structure that supports queries of two types:
1. Add a positive integer to an element of a given index in the array `nums2`.
2. Count the number of pairs `(i, j)` such that `nums1[i] + nums2[j]` equals a given value (`0 <= i < nums1.length` and `0 <= j < nums2.length`).

Implement the `FindSumPairs` class:
- `FindSumPairs(int[] nums1, int[] nums2)` initalizes the `FindSumPairs` object with two integer arrays `nums1` and `nums2`
- `void add(int index, int val)` adds `val` to `nums2[index]` i.e. apply `nums2[index] += val`
- `int count(int tot)` returns the number of pairs `(i, j)` such that `nums1[i] + nums2[j] == tot`.

## Example
```
FindSumPairs findSumPairs = new FindSumPairs([1, 1, 2, 2, 2, 3], [1, 4, 5, 2, 5, 4]);
findSumPairs.count(7);  // return 8; pairs (2,2), (3,2), (4,2), (2,4), (3,4), (4,4) make 2 + 5 and pairs (5,1), (5,5) make 3 + 4
findSumPairs.add(3, 2); // now nums2 = [1,4,5,4,5,4]
findSumPairs.count(8);  // return 2; pairs (5,2), (5,4) make 3 + 5
findSumPairs.count(4);  // return 1; pair (5,0) makes 3 + 1
findSumPairs.add(0, 1); // now nums2 = [2,4,5,4,5,4]
findSumPairs.add(1, 1); // now nums2 = [2,5,5,4,5,4]
findSumPairs.count(7);  // return 11; pairs (2,1), (2,2), (2,4), (3,1), (3,2), (3,4), (4,1), (4,2), (4,4) make 2 + 5 and pairs (5,3), (5,5) make 3 + 4
```

## Key Idea
We can simply use a hash map that tracks the number of elements to its occurrence. Then for every `add`, we remove one occurrence from the hash map, add value to it, then update the map to new key.

For num1, we will also use a map but we don't need array to track it since we won't update this map. Then we can simply iterate over the keys and find out `tot - num` in nums2.

## Runtime Complexity
- Runtime Complexity:
  - Constructor: O(n + m) to build the map
  - add: O(1)
  - count: O(n)
- Space Complexity: O(n + m)

## Solution
- [Python](./solution.py)
