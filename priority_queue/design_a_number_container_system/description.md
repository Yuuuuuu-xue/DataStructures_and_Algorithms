# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 2349

## Problem
Design a number container system that can do the following:
- Insert or replace a number at the given index in the system
- Return the smallest index for the given number in the system

Implement the `NumberContainers` class:
- `NumberContainers()` initializes the number container system
- `void change(int index, int number)` fills the container at `index` with the `number`. If there is already a number at that `index`, replace it.
- `int find(int number)` returns the smallest index for the given `number`, or `-1` if there is no index that is filled by `number` in the system.

## Example
```
NumberContainers nc = new NumberContainers();
nc.find(10); // There is no index that is filled with number 10. Therefore, we return -1.
nc.change(2, 10); // Your container at index 2 will be filled with number 10.
nc.change(1, 10); // Your container at index 1 will be filled with number 10.
nc.change(3, 10); // Your container at index 3 will be filled with number 10.
nc.change(5, 10); // Your container at index 5 will be filled with number 10.
nc.find(10); // Number 10 is at the indices 1, 2, 3, and 5. Since the smallest index that is filled with 10 is 1, we return 1.
nc.change(1, 20); // Your container at index 1 will be filled with number 20. Note that index 1 was filled with 10 and then replaced with 20. 
nc.find(10); // Number 10 is at the indices 2, 3, and 5. The smallest index that is filled with 10 is 2. Therefore, we return 2.
```

## Key Idea
We can simply use a map that maps the index to the number.

Also a number maps to a heap that stores an index.

To find the smallest index, we keep pop from heap and return only if the index returns by heap is same as `map[i]`. Since when we update, we don't update the heap, only map.

## Time Complexity
- Runtime Complexity:
 - change: O(lg n)
 - find: O(lg n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)