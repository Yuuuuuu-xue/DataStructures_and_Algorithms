## Hashing
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 380

## Description
Implement the `RandomizedSet` class:
- `RandomizedSet()` initializes the `RandomizedSet` object
- `bool insert(int val)` inserts an item `val` into the set if not present. Returns `true` if the item was not present, `false` otherwise
- `bool remove(int val)` removes an item `val` from the set if present. Returns `true` if the item was present, `false` otherwise.
- `int getRandom()` returns a random element from the current set of elements (it's guaranteed that at least one element exists when this method is called). Each element must have the same probability of being returned.

## Example
```
RandomizedSet randomizedSet = new RandomizedSet();
randomizedSet.insert(1); // Inserts 1 to the set. Returns true as 1 was inserted successfully.
randomizedSet.remove(2); // Returns false as 2 does not exist in the set.
randomizedSet.insert(2); // Inserts 2 to the set, returns true. Set now contains [1,2].
randomizedSet.getRandom(); // getRandom() should return either 1 or 2 randomly.
randomizedSet.remove(1); // Removes 1 from the set, returns true. Set now contains [2].
randomizedSet.insert(2); // 2 was already in the set, so return false.
randomizedSet.getRandom(); // Since 2 is the only number in the set, getRandom() will always return 2.
```

## Key Idea
Simply use a hash set. For `getRandom`, simply return an item at index of a random number from `i = 0` to `i = n - 1`.

## Runtime Complexity
- Runtime Complexity: O(1) for all operations
- Space Complexity: O(n) overall

## Solution
- [C++](solution.cpp)
