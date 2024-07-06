# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Easy 2582

## Problem
There are `n` people standing in a line labeled from `1` to `n`. The first person in the line is holding a pillow initially. Every second, the person holding the pillow passes it to the next person standing in the line. Once the pillow reaches the end of the line, the direction changes, and people continue passing the pillow in the opposite direction.
- For example, once the pillow reaches the `nth` person they pass it to the `n - 1th` person, then to the `n - 2th` person and so on.

Given the two positive integers `n` and `time`, return the index of the person holding the pillow after `time` seconds.

## Examples:
```
Input: n = 4, time = 5
Output: 2
Explanation: People pass the pillow in the following way: 1 -> 2 -> 3 -> 4 -> 3 -> 2
After 5 seconds, the 2nd person is holding the pillow.
```

## Key Idea
For given `n`, it takes `n - 1` to pass to the last person.

Let's assume if we pass to last person, it can pass to the first person instead of in the opposite direction.

Then we can simply the location is at `time % (n - 1)`.

Then, we consider opposite direction, this is when `time / n` is odd number, then the answer will be `n - time % (n - 1)`. Otherwise `time % (n - 1)`.

## Complexity Analysis
- Runtime Complexity: O(1)
- Space Complexity: O(1)

## Solution
- [Python](./solution.py)
