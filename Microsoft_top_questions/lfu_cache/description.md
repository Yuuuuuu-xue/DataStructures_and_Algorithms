## LeetCode Question
Hard 460

## Description
Design and implement a data structure for a Least Frequently Used (LFU) cache.

Implement the LFUCache class:
- `LFUCache (int capacity)` initializes the object with the `capacity` of the data structure
- `int get(int key)` gets the value of the `key` if the `key` exists in the cache. Otherwise returns `-1`.
- `void put(int key, int value)` updates the value of the `key` if present or inserts the `key` if not already present. When the cache reaches its `capacity`, it should invalidate and remove the least frequently used key before inserting a new item. For this problem, when there is a tie (two or more keys with the same frequency), the least recently used `key` would be invalidated.

To determine the least frequently used key, a use counter is maintained for each key in the cache. The key with the smallest use counter is the least frequently used key.

When a key is first inserted into the cache, its use counter is set to `1` due to the put operation. The use counter for a key is the cache is incremented either a `get` or `put` operation is called on it.

The function `get` and `put` must each run in `O(1)` average time complexity.

## Example
```
Input:
["LFUCache", "put", "put", "get", "put", "get", "get", "put", "get", "get", "get"]
[[2], [1, 1], [2, 2], [1], [3, 3], [2], [3], [4, 4], [1], [3], [4]]

Output:
[null, null, null, 1, null, -1, 3, null, -1, 3, 4]
```

## Key Idea
Let `m` be a map that maps the key to a pair of value and frequency. Let `freq` be a mapo that maps the frequency to a list of keys that has this frequency. Now, the question comes, what if there is a tie and we need to keep track of least recently used `key`.

Notice C++ stores the elements in a list at the non-contiguous memory location and thus use a doubly linked list internally. And C++ stores the elements in a vector at the contiguous memory location and use a dynamic array internally. In this case, we want a doubly linedlist so we can have O(1) to get and update the least recently used. We can store the iterator of the list, then we can use it as a key to erase from list in O(1).

## Complexity Analysis
- Time complexity: O(n)
- Space complexity: O(n)

## Solution
- [C++](solution.cpp)