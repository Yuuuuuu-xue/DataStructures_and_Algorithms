## LeetCode Problem
Hard 239

## Description
You are given an array of integer `nums`, there is a sliding window of size `k` which is moving from the very left or the array to the very right. You can only see the `k` numbers in the window. Each time the sliding window moves right by one position. Return the max sliding window.

## Example
```
Input: nums = [1, 3, -1, -3 ,5, 3, 6, 7], k = 3
Output: [3, 3, 5, 5, 6, 7]
Explanation:
 Window position:            Maximum
 [1, 3, -1], -3, 5, 3, 6, 7  3
 1, [3, -1, -3], 5, 3, 6, 7, 3
 1, 3, [-1, -3, 5], 3, 6, 7, 5
 1, 3, -1, [-3, 5, 3], 6, 7, 5
 1, 3, -1, -3, [5, 3, 6], 7, 6
 1, 3, -1, -3, 5, [3, 6, 7], 7
```

## Basic Idea
Let D be a deque of pairs (x_i, i) of sorted values in non-decreasing order (we will maintain the order). Initially, we will build the deque with first window elements. To push an element s_i into the deque, we starting from the right side of the deque and check if that item <= currValue, if so, we remove it. Until the rightmost element > currValue, we push it into the dequeue from right side. We can do so since currValue must be in the current window and therefore any previous pairs with value <= currValue in the same window will use currValue. Then we simply loop over all the window and for each iteration, we check:
- If leftmost pair in `D` is in the window, if so, we use this value and push the rightmost pair in current window in D as described above.
- If leftmost pair is `D` is not in the window, we pop this value and repeat the same process. It will guarantee that `D` will not be empty since we are pushing one value for each iteration into `D` and remove any uncessary values.

## Solution
- [C++](./solution.cpp)