## Linked List
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Hard 432

## Problem
Design a data structure to stroe the strings' count with the ability to return hte strings with minimum and maximum counts.

Implement the `AllOne` class:
- `AllOne` initializes the object of the data structure.
- `inc(String key)` increments the count of the string `key` by `1`. If `key` does not exist in the data structure, insert it with count `1`
- `dec(String key)` decrements the count of the string `key` by `1`. If the count of `key` is `0` after the decrement, remove it from the data structure. If is guaranteed that `key` exists in the data structure before the decrement.
- `getMaxKey()` returns one of the keys with the maximal count. If no element exists, return an empty string `""`
- `getMinKey()` returns one of the keys with the minimum count. If no element exists, return an empty string `""`

Note that each function must run in `O(1)` average time complexity.

## Example
```
Input: ["AllOne", "inc", "inc", "getMaxKey", "getMinKey", "inc", "getMaxKey", "getMinKey"]
[[], ["hello"], ["hello"], [], [], ["leet"], [], []]
Output: [null, null, null, "hello", "hello", null, "hello", "leet"]

Explanation
AllOne allOne = new AllOne();
allOne.inc("hello");
allOne.inc("hello");
allOne.getMaxKey(); // return "hello"
allOne.getMinKey(); // return "hello"
allOne.inc("leet");
allOne.getMaxKey(); // return "hello"
allOne.getMinKey(); // return "leet"
```

## Key Idea
Since we want each operation uses `O(1)` runtime complexity, we cannot simply use a hashmap that maps the key to its frequency.

We will solve this problem more efficiently with double linked-list and a hash map.

A linked list node contains
- `freq` that represents all keys of the same frequency storing in this node
- `keys` a set of keys have this frequency
- `prev` a pointer to the previous node in the list
- `next` a pointer to the next node in the list

Then we also have a key that maps to the corresponding linked list node.

## Complexity Analysis
- Runtime Complexity: O(1)
- Space Complexity: O(n)

## Solution
- [Python Solution](./solution.py)