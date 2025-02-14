# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 1352

## Problem
Design an algorithm that accepts a stream of integers and retrieves the product of the last `k` integers of the stream.

Implement the `ProductOfNumbers` class:
- `ProductOfNumbers()` initilizes the object with an empty stream
- `void add(int num)` appends the integer `num` to the stream
- `int getProduct(int k)` returns the product of the last `k` numbers in the current list. You can assume that always the current list has at least `k` numbers

The test case are generated so that, at any time, the product of any contiguous sequence of numbers will fit into a single 32-bit integer without overflowing.

## Example
```
ProductOfNumbers productOfNumbers = new ProductOfNumbers();
productOfNumbers.add(3);        // [3]
productOfNumbers.add(0);        // [3,0]
productOfNumbers.add(2);        // [3,0,2]
productOfNumbers.add(5);        // [3,0,2,5]
productOfNumbers.add(4);        // [3,0,2,5,4]
productOfNumbers.getProduct(2); // return 20. The product of the last 2 numbers is 5 * 4 = 20
productOfNumbers.getProduct(3); // return 40. The product of the last 3 numbers is 2 * 5 * 4 = 40
productOfNumbers.getProduct(4); // return 0. The product of the last 4 numbers is 0 * 2 * 5 * 4 = 0
productOfNumbers.add(8);        // [3,0,2,5,4,8]
productOfNumbers.getProduct(2); // return 32. The product of the last 2 numbers is 4 * 8 = 32 
```

## Key Idea
The `k` is not given as a constant and it can change. Thus, we need to use a prefix product array `prefix` such that `prefix[i]` represents the product from first element up to ith element (inclusive).

Then, when we add an element, we can simply append `prefix[-1] * num`

When we want to find the product of last `k` elements, we can simply use `prefix[-1] / prefix[n - k - 1]`.

However, we need to handle a case if we push a number `0` into the array. In this case, we need to clear the array since all product will be before this number.

Then, if `k >= n`, we know that it has to be a 0.

## Complexity Analaysis
- Time Complexity: O(1) for all operations
- Space Complexity: O(1) for all operations, overall O(n)

## Solution
- [Python](./solution.py)