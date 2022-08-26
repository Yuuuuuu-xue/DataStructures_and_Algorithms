## Bit Manipulation
Click [here](../notes.md) to go back to the notes page.

## Problem
Given an integer array `nums` where every element appears three times except for one, which appears exactly once. Find the signle element and return it.

You must implement a solution with linear runtime complexity and use only constant extra space.

## Example
```
Input: nums = [2, 2, 3, 2]
Output: 3

Input: nums = [0, 1, 0, 1, 0, 1, 99]
Output: 99
```

## Key Idea
Since we know that `x XOR x = 0` and `0 XOR x = x`. Then `x XOR x XOR x = x` thus we cannot use the solution from [Single Number](../single_number/description.md) to solve this problem. However, let `mask1` be the bitmask of storing bits that we see it first time and `mask2` be the bitmask of storing bits that we see it second time with both initialized to 0.

Then suppose we see `x` first time, we can know `mask2` does not have bits of `x`, then the inverse of mask2 = `~mask2` must have bits of `x`, then we can set `mask1 = (mask1 ^ x) & ~mask2`. So that it will store the bits for `x` for the first time. And then we set `mask2 = (mask2 ^ x) & ~mask1`. Note since `mask1` stores the bits for `x`, thus `~mask1` will not and we use `&` thus `mask2` is not changed.

Now suppose `mask1` contains bits of `x` for first time. Then
- `mask1 = (mask1 ^ x) & ~mask2`, since mask1 already has the bits for `x`, if we perform XOR will set it to 0 thus `mask1` do not contain the bits of `x` when we see it for the second time.
- `mask2 = (mask2 ^ x) & ~mask1`, since from above, we know that `mask1` does not contain bits for `x` and `mask2` does not contain bits for `x`, thus `mask2` will contain bits for `x`

Not suppose we see `x` for the third time. Then
- `mask1 = (mask1 ^ x) & ~mask2`, since mask2 contains `x`, thus `~mask2` will not and thus `mask1` will not contain bits for `x` as well.
- `mask2 = (mask2 ^ x) & ~mask2`, since mask2 contains `x`, thus perform `x` again and so `mask2` will not contain bits for `x`.

Thus, when we visit the element three times, both `mask1` and `mask2` will not contains its bits. Thus at the end, we can return `mask1` as our final result.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [C++](solution.cpp)