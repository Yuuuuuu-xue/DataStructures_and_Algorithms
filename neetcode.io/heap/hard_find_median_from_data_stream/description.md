## LeetCode Problem
Hard 295

## Description
The median is the middle value in an ordered integer list. If the size of the list is even, there is no middle value, and the median is the mean of the two middle values.
- For example, for `arr = [2, 3, 4]`, the median is `3`
- For example, for `arr = [2, 3]`, the median is `(2 + 3) / 2 = 2.5`

Implement the MedianFinder class:
- `MedianFinder()` initializes the `MedianFinder` object
- `void addNum(int num)` adds the integer `num` from the data stream to the data structure
- `double findMedian()` returns the median of all elements so far.

## Example
```
MedianFinder medianFinder = new MedianFinder();
medianFinder.addNum(1);
medianFinder.addNum(2);
medianFinder.findMedian(); // return 1.5
medianFinder.addNum(3);
medianFinder.findMedian(); // return 2.0
```

## Basic Idea
Let `p1` be a max heap storing small values and `p2` be a min heap storing large values from the given array. If we maintain the size of `p1` and `p2` to be equal or diff at most 1, then
- If size of `p1` and `p2` are the same, the root of max heap and root of min heap are the two middle values
- If size of `p1 = 1 + p2`, then the oroot of min heap (p2) is the middle value

## Complexity Analysis
For n = number of users and m = number of tweets
- Runtime Complexity:
  - Constructor: O(1)
  - addNum: O(lg n)
  - findMedian: O(1)
- Space Complexity: O(n)

## Solution
- [C++](./solution.cpp)