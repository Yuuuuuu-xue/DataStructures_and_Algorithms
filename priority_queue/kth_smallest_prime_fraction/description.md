## Priority Queue
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 786

## Description
You are given a sorted integer array `arr` containing `1` and prime numbers, where all the integers of `arr` are unique. You are also given an integer `k`.

For every `i` and `j` where `0 <= i < j < arr.length`, we consider the fraction `arr[i] / arr[j]`.

Return the `kth` smallest fraction considered. Return your answer as an array of integers of size `2`, where `answer[0] == arr[i]` and `answer[1] == arr[j]`.

## Example
```
Input: arr = [1, 2, 3, 5], k = 3
Output: [2, 5]
Explanation: The possible fractions are 1/2, 1/3, 1/5, 2/3, 2/5, and 3/5. The thrid smallest fraction is 2/5
```

## Key Idea
We can basically generate all the possible fractions and use a min heap to store all the possible fractions. Then it takes up to `O(n^2)` of pairs and each insert takes `O(lg n)`. Thus the overall runtime complexity is `O(n ^ 2 * lg n)`.

Since the array is sorted, we need to take advantage of this array. For each number at index `i`, we push a number `(num[i] / num[-1])` since the `num[-1]` is the largest number. Then the initial heap takes `O(n lg n)` to build. Then, while not reach to `k`, we pop from min heap, move the demoniator (initial equals to `-1`) to the left and then we can push back to the array.

For example, if we have the arr `[1, 5, 7]`. Then we push `1/7` to the heap. Once we pop it, we push back `1/5` to the heap.

Since the input array is sorted and we push every number except the last number and divide by last number. It has to be in the sorted order.

## Solution
- [Python](./solution.py)