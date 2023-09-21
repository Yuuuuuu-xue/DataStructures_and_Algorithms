## LeetCode Problem
Medium 435

## Description
You are given a 2D integer array `intervals`, where `intervals[i] = [left_i, right_i]` describes that `ith` interval starting at `left_i` and ending at `right_i` (inclusive). The size of an interval is defined as the number of integers it contains, or more formally `right_i - left_i + 1`.

You are also given an integer array `queries`. The answer to the `jth` query is the size of the smallest interval `i` such that `left_i <= queries[j] <= right_i`. If no such interval exists, the answer is `-1`.

Return an array containing the answers to the queries.

## Example
```
Input: intervals = [[1, 4], [2, 4], [3, 6], [4, 4]], queries = [2, 3, 4, 5]
Output: [3, 3, 1, 4]
Explanation: The queries are processed as follows:
- Query = 2: The interval [2, 4], 4 - 2 + 1 = 3
- Query = 3: The interval [2, 4]
- Query = 4: The interval [4, 4]
- Query = 5: The interval [3, 6]
```

## Key Idea
Suppose we start with all the interval some smaller size to larger size so when we find an inteval that works for a query, we know that's the smallest size. Thus, we will sort the input interval from smaller size to larger size. Then, we convert queries into a balanced binary search tree. For each interval, we can find a query that within the range in `O(lg n)` time. Then we simply loop over all the larger values within the range, we will remove those values from the tree since we already find the smallest interval size.

## Complexity Analysis
- Time Complexity:
  - O(n lg n) for the sorting
  - O(m lg m) for constructing the balanced binary search tree
  - O(n + m lg m) since we will need to loop over all the intervals, may need to pop all the nodes in the binary search tree
- Space Complexity: O(n)

## Solution
- [C++](./solution.cpp)
- [Rust](./solutionr.rs)