## LeetCode Question
Hard 768

## Description
You are given an integer array `arr`.

We split `arr` into some number of chunks (i.e. partitions) and individually sort each chunk. After concatenating them, the result should equal the sorted array.

Return the largest number of chunks we can make to sort the array.

## Example
```
Input: arr = [5, 4, 3, 2, 1]
Output: 1
Explanation: Splitting into two or more chunks will not return the required result. For example, splitting into [5, 4] and [3, 2, 1] will result in [4, 5, 1, 2, 3] which is not sorted.

Input: arr = [2, 1, 3, 4, 4]
Output: 4
Explanation: we can split into [2, 1], [3], [4], [4].
```

## Key Idea
We will solve this problem using greedy algorithm. Notice we can split into a chunk if the current max item in the current chunk is the smallest element in the remaining elements. For example, the input array `[2, 1, 3, 4, 4]`, we cannot split into chunk `[2]` because `2` is not the smallest among the remaining elements. Then we have to expand this chunk and insert `1`. Since `1` is the smallest element in the remaining elements, we can split it into `[2, 1]` as the first chunk. Then `3` and `4` are all the smallest elements in the remaining elements, thus we can eventually split into `[2, 1], [3], [4], [4]`.

Simply let `dp[i]` be the smallest element in the `arr[i:]`, then we can access the smallest element in the remaining elements in constant time.

## Complexity Analysis
- Time complexity: O(n)
- Space complexity: O(n)

## Solution
- [C++](solution.cpp)