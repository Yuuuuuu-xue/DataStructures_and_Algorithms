## Divide and Conquer
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Hard 1095

## Description
You may recall that an array `arr` is a mountain array if and only if:
- `arr.length >= 3`
- There exists some `i` with `0 < i < arr.length - 1` such that
  - `arr[0] < arr[1] < ... < arr[i - 1] < arr[i]`
  - `arr[i] > arr[i + 1] ... > arr[n - 1]`

Given a mountain array `mountainArr`, return the minimum `index` such that `mountainArr.get(index) == target`. If such an `index` does not exist, return `-1`.

You cannot access the mountain array directly. You may only access the array using a `MountainArray` interface:
- `MountainArray.get(k)` returns the elemnt of the array at index `k` (0-indexed)
- `MountainArray.length()` returns the length of the array

Submission making more than `100` calls to `MountainArray.get` will be judged Wrong Answer. Also, any solutions that attempt to circumvent the judge will result in disqualification.

## Example
```
Input: array = [1, 2, 3, 4, 5, 3, 1], target = 3
Output: 2
Explanation: 3 exists in the array, at index=2 and index=5. Return the minimum index, which is 2.

Input: array = [0, 1, 2, 4, 2, 1], target = 3
Output: -1
Explanation: 3 does not exist in the `array`, so we return `-1`.
```

## Key Idea
We know that this array is sorted in an non-decreasing order up to `i` then sorted in an non-increasing order.

Suppose we know the `i`, what can we do?

Then `0` to `i` is sorted in non-decreasing order. We can perform a binary search to find such element.

If target does not exist. Then, we can perform a bianry search on `i` to `n - 1` that is sorted in an non-increasing order.

If target does not exist, then we can return `-1`.

Now, how can we find `i`? The solution is to use a binary search. We will compare `mid` with `mid + 1`.

If `MountainArray.get(mid) < MountainArray.get(mid + 1)`, then it's sorted on the left side and we should look at the right, thus `left = mid + 1`.

If `MountainArray.get(mid) > MountainArray.get(mid + 1)`, then it's sorted on the right side and mid could be the `i` that we are lookign for, thus `right = mid`.


## Complexity Analysis
- Runtime Complexity: O(lg n)
- Space Complexity: O(1)

## Solution
- [C++](./solution.cpp)
