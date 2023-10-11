## Priority Queue
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Hard 2251

## Description
You are given a 0-indexed 2D integer array `flowers` where `flowers[i] = [start_i, end_ ]` means the `ith` flower will be in full bloom from `start_i` to `end_i` (inclusive). You are also given a 0-indexed integer array `people` of size `n`.

Return an integer array `answer` of size `n` where `answer[i]` is the number of flowers that are in full bloom when the `ith` person arrives.

## Example
```
Input: flowers = [[1, 6], [3, 7], [9, 12]. [4, 13]], people = [2, 3, 7, 11]
Output: [1, 2, 2, 2]
Explanations:

Index (1 based)
1 2 3 4 5 6 7 8 9 10 11 12 13
Flowers:
1 1 1 1 1 1
    1 1 1 1 1
                1 1  1  1
      1 1 1 1 1 1 1  1  1  1
People:
  1 1       1        1

Input: flowers = [[1, 10], [3, 3]], people = [3, 3, 2]
Output: [2, 2, 1]
```

## Basic Idea
We will solve this problem with priority queue. When we loop over people, we basically want to iterate over the flowers and check if people `i` can see `j`th flower full bloom.

Now, suppose all the flowers are sorted based on its start time. Then at people i, we can add the flowers that has smaller start time than current time `i` to the priority queue. Then, we can keep pop the flower out of the priority queue that end time is less than the current time. Then the length of the priority queue is the number of flowers that person at time `i` can see the full bloom.

Since we need to pop the flower out based on end time, we will use a min heap based on the end time.

The key idea to use priority queue is that for each person at `i`, we don't have to loop over every flower.

Instead, we will loop over each flower at most once since we will add to the priority queue once and pop it from the queue when don't need them and will not add them back.

In second example, we see there is an example where people comes at different time, we need to make sure that people must come in a sorted order time. While the output requires index, thus, need to sort the value with index including.

## Complexity Analysis
Let `m = len(flowers)` and `n = len(people)` 
- Runtime Complexity: O(m lg m + n + n lg n)
  - Sort takes (m lg m)
  - Need to iterate over person thus O(n)
  - Need to pop and add flowers but O(m lg m) in total iterations
  - Sort the people
- Space Complexity: O(m + n)
  - O(m) for the heap
  - O(n) for the (time, i) pair

## Solution
- [C++](./solution.cpp)