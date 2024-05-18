# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## LeetCode Problem
Medium 1558

## Problem
You are given an integer array `nums`. You have an integer array `arr` of the same length with all values set to `0` initially. You also have the following `modify` function:
```
func modify(arr, op, idx) {
  // add by 1 index idx
  if (op == 0) {
    arr[idx] = arr[idx] + 1
  }
  // multiply by 2 all elements
  if (op == 1) {
    for (i = 0; i < arr.length; i++) {
      arr[i] = arr[i] * 2
    }
  }
}
```

You want to use the modify function to convert `arr` to `nums` using the minimum number of calls.

Return the minimum number of function calls to make `nums` from `arr`.

The test cases are generated so that the answer fits in a 32-bit singed integer.

## Example
```
Input: nums = [1, 5]
Output: 5
Explanation:
1. Increment by 1 (second element): [0, 0] to get [0, 1].
2. Double all the elements: [0, 1] to [0, 2]
3. Double all the elements: [0, 2] to [0, 4]
4. Increment by 1 (first element): [1, 4]
5. Increment by 1 (second element): [1, 5]
```

## Key Idea
Since we have a list of numbers, we will not try to build from `[0, ..., 0]` to that list. Instead, we want to move from that list and reduce to `[0, ..., 0]`.

Then, simply loop over num, if that num is odd num, we take one operation to move decrement it by 1. If the num is even, we divide by 2 and increment the even number multiply operations. We keep track of max multiply operations we need for each num. Then total number of operations equals to `num of odd operations + max num of multiply operations`

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(1)

## Solution
- [Python](./solution.py)