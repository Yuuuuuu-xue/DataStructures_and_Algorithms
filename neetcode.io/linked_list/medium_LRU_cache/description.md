## LeetCode Problem
Medium 146

## Description
Design a data structure that follows the constraints of a Least Recently Used (LRU) cache.

Implement the `LRUCache` class:
- `LRUCache(int capacity)` initializes the LRU cache with positive size capacity.
- `int get(int key)`: returns the value of the `key` if the key exists, otherwise return `-1`.
- `void put(int key, int value)` updates the value of the `key` if the `key` exists. Otherwise, add the `key-value` pair to the cache. If the number of keys exceeds the `capacity` from this operation, evict the least recently used key.

The function `get` and `put` must each run `O(1)` average time complexity.

## Example
```
Input:
  ["LRUCache", "put", "put", "get", "put", "get", "put", "get", "get", "get"]
  [[2], [1, 1], [2, 2], [1], [3, 3], [2], [4, 4], [1], [3], [4]]
Output:
  [null, null, null, 1, null, -1, null, -1, 3, 4]
Explanation:
LRUCache lruCache = new LRUCache(2);
lruCache.put(1, 1);
lruCache.put(2, 2);
lruCache.get(1);
lruCache.put(3, 3);
lruCache.get(2);
lruCache.put(4, 4);
lruCache.get(1);
lruCache.get(3);
lruCache.get(4);
```

## Basic Idea
We will need a map that maps the key to the value. Now, to remove the least recently used and update the most recently used, we need a double linked list to solve this problem. So we use a hashmap that maps the key to a node in the double linked list.
- For `get`, if the key exitsts, return the value of the node. Remove that node from the double linked list, and join it as the front of the double linked list (as the most recently used)
- For `set`, if exceeds the capcity, remove the node in the back (least recently used). Add the current key value pair to the most recently used.

## Solution
- [C++](./solution.cpp)