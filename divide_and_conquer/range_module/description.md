## Divide and Conquer
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Hard 715

## Problem
A Range Module is a module that tracks ranges of numbers. Design a data structure to track the ranges represented as half-open intervals and query about them.

A half-open interval `[left, right)` denotes all the real numbers `x` where `left <= x < right`.

Implement the `RangeModule` class:
- `RangeModule()` initializes the object of the data structure
- `void addRange(int left, int right)` adds the half-open interval `[left, right)`, tracking every real number in that interval. Adding an interval that partially overlaps with currently tracked numbers should add any numbers in the interval `[left, right)` that are not already tracked.
- `void removeRange(int left, int right)` stops tracking every real number currently being tracked in the half-open interval `[left, right)`.

## Examples:
```
RangeModule rangeModule = new RangeModule();
rangeModule.addRange(10, 20);
rangeModule.removeRange(14, 16);
rangeModule.queryRange(10, 14); // true since we have the range [10, 14)
rangeModule.queryRange(13, 15); // false since we do not have 14
rangeModule.queryRange(16, 17); // true
```

## Basic Idea
We should store the range in a sorted list. Then everytime we perform `addRange`, we will find the insertion point in O(ln n) time. Note, we will also need to loop towards left side of the insertion point to merge any intervals if necessary.

Note, if we choose to use C++ (or Java) to solve this problem, then we have the map (treemap) to map the left to the rigth of the range. Thus everything is sorted based on the left value of the range.

Let `m` be a map that maps the left of the range to the right of the range and will maintain the disjoint range property.

Then for the `addRange`, we will call `removeRange` first to remove the range. Then we can insert the current range to the map. Note, in this case, it's previous and next insertion point may collapse with it. Thus we will need to check its previous and next insertion point.

For the `removeRange`, we will try to find the lowerbound (left > the left we want to delete), then its previous insertion point may also intersects with the range we want to delete, we will move the pointer 1 step back. Note only 1 step since if the previous of previous pointer also intersects, then those two ranges already intersects each other and violate the disjoint range property. We will move this range to the right until the end and check:
- If curr->left < left and curr->right >= right, then update curr->right = left. and if curr->right > right, then we again have another interval [right, curr->right].
- If curr->left >= left and curr->right >= right, then curr->left = right.

For `queryRange`, we will try to find the upperbound range so `curr->left > left` then move `curr` 1 step to the back, in this case `curr-left <= left`, then we simply check if the `curr->right >= right`, if so we have the range.

## Complexity Analysis
- Runtime Complexty:
  - removeRange: We may loop over the every elements in the map, thus linear time respect to the map size
  - addRange: Since we call the removeRange and perform a binary search, thus linear time as well
  - queryRange: will just be O(lg n) where n is respect to the map size
- Space Complexity:
  - Overall just use the map to keep track the ranges

## Amortize Complexity Analysis
- Since addRange calls removeRange, thus we will analysis removeRange first. Suppose we have `n` calls of addRange that do not remove anything (complexity of `O(n)`), then we have 1 call of removeRange that removes all the elements in the range thus (complexity of `O(n)`), thus we have `O(n + n) / (n + 1) = O(1)`, since each operation, we will call binary search, thus `O(lg n)` is the average time complexity for each operation.

## Solution
- [C++](./solution.cpp)