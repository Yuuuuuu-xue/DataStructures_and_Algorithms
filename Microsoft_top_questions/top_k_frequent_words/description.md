## LeetCode Question
Medium 692

## Description
Given an array of strings `words` and an integer `k`, return the `k` most frequent strings.

Return the answer sorted by the frequency from highest to lowest. Sort the words with the same frequency by their lexicographical order.

## Example
```
Input: words = ["i", "love", "leetcode", "i", "love", "coding"], k = 2
Output: ["i", "love"]
Explanation: "i" and "love" are the two most frequent words. Note that "i" comes before "love" due to a lower alphabetical order.
```

## Key Idea
Let `m` be a map that maps the words to its occurrence. Then, let `pq` be a priority queue with max heap so that for given two strings `str1` and `str2`, `str1` is closer to the top if:
- `m[str1] == m[str2]` and `str1 < str2`
- `m[str1] < m[str2]`

Then we can simply pop top k items from the priority queue.

## Complexity Analysis
- Time complexity: O(n) to construct the map, O(m lg m) to construct the priority queue where m is the number of unique words, O(k lg m) to get the output array 
- Space complexity: O(n) for both hashmap and priority queue

## Solution
- [C++](solution.cpp)