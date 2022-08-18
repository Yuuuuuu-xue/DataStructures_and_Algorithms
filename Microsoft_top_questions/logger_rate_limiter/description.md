## LeetCode Question
Medium 359 (Premium)

## Description
Design a logger system that receives a stream of messages along with their timestamps. Each unique message should only be printed at most every 10 seconds (i.e. a message printed at timestamp `t` will prevent other identical messages from being printed until timestamp `t + 10`).

All messages will come in chronological order. Several messages may arrive at the same timestamp.

Implement the `Logger` class:
- `Logger()` initializes the `logger` object
- `bool shouldPrintMessage(int timestamp, string message)` returns `true` if the `message` should be printed in the given `timestamp`, otherwise return `false`.

## Example
```
Input:
["Logger", "shouldPrintMessage", "shouldPrintMessage", "shouldPrintMessage", "shouldPrintMessage", "shouldPrintMessage", "shouldPrintMessage"]
[[], [1, "foo"], [2, "bar"], [3, "foo"], [8, "bar"], [10, "foo"], [11, "foo"]]

Output:
[null, true, true, false, false, false, true]
```

## Key Idea
Let `m` be a map that maps the logged message to its timestamp. If m does not have the key, then we can log it. Otherwise if `m[loggedMessage] + 10 <= timestamp`, then we can log it otherwise we cannot log it. If we can log it, then update the map.

## Complexity Analysis
- Time complexity: O(n)
- Space complexity: O(n)

## Solution
- [C++](solution.cpp)