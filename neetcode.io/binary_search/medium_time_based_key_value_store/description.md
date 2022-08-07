## LeetCode Problem
Medium 981

## Description
Design a time-based key-value data structure that can store multiple values for the same key at different time stamps and retrieve the key's value at a certain timestamp.

Implement the `TimeMap` class:
- `TimeMap()` initializes the object of the data structure.
- `void set(String key, String value, int timestamp)` stores the key `key` with the value `value` at the given time `timestamp`. 
- `String get(String key, int timestmap)` returns a value such that `set` was called previously, with `timestamp_prev <= timestamp`. If there are multiple such values, it returns the value associated with the largest `timestamp_prev`. If there are no values, it returns `""`.

You can assume all the timestamps `timestmap` of `set` are strictly increasing.

## Example
```
Input:
["TimeMap", "set", "get", "get", "set", "get", "get"]
[[], ["foo", "bar", 1], ["foo", 1], ["foo", 3], ["foo", "bar2", 4], ["foo", 4], ["foo", 5]]
Output:
[null, null, "bar", "bar", null, "bar2", "bar2"]

Explanation
TimeMap timeMap = new TimeMap();
timeMap.set("foo", "bar", 1);
timeMap.get("foo", 1);
timeMap.get("foo", 3);
timeMap.set("foo", "bar2", 4);
timeMap.get("foo", 4);
timeMap.get("foo", 5);
```

## Basic Idea
Notice we can assume all the timestamps are strictly increasing, thus we don't need a sorted container when we set a key value pair. Let m be a map that maps the key to a list of pairs (timestamp, value). Then, for set, simily push a pair with the corresponding key. For get, we can use the binary search to find the minimum timestamp that >= the given timestamp and return its value.

## Solution
- [C++](./solution.cpp)