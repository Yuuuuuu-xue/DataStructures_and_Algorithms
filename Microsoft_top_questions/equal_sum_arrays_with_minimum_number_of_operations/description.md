## LeetCode Question
Medium 1775

## Description
You are given two arrays of integers `nums1` and `nums2`, possibly of different lengths. THe values in the arrays are between `1` and `6`, inclusive. In one operation, you can change any integer's value in any of the arrays to any value between `1` and `6`, inclusive. 

Return the minimum number of operations required to make the sum of values in `nums1` equal to the sum of values in `nums2`. Return `-1` if it is not possible to make the sum of the two arrays equal.

## Example
```
Input: nums1 = [1, 2, 3, 4, 5, 6], nums2 = [1, 1, 2, 2, 2, 2]
Output: 3
Explanation: You can make the sums of nums1 and nums2 equal with 3 operations. All the indicies are 0-indexed.
- Change nums2[0] to 6. Thus nums1 = [1, 2, 3, 4, 5, 6], nums2 = [6, 1, 2, 2, 2, 2]
- Change nums1[5] to 1. Thus nums1 = [1, 2, 3, 4, 5, 1], nums2 = [6, 1, 2, 2, 2, 2]
- Change nums1[2] to 2. Thus nums1 = [1, 2, 2, 4, 5, 1], nums2 = [6, 1, 2, 2, 2, 2]

Input: nums1 = [1, 1, 1, 1, 1, 1, 1], nums2 = [6]
Output: -1
Explanation: There is no way to decrease the sum of nums1 or to increase the sum of nums2 to make them equal.
```

## Key Idea
Let `sum1` and `sum2` be the sum of the two arrays. Let `lowerNums` be the input array that has a smaller sum and similarly we have the `higherNums`. Then will try to decrease the higher sum or increase the lower sum until the difference is `<= 0`. Notice we can make it `< 0`, then we can also make it `= 0` by choosing decrease to a larger value or increase to a smaller value.

The question is how do we choose to increase/decrease? Since all the values are between `1` and `6`. For each operation, the maximum value we can subtract for difference between sum is in between `1` and `5`. Then let `m` be a map that maps the the value we can subtract (which is 1-5) to a number of operations we can do. Then we can traverse the `higherNums`, we know we want to decrease it thus for each number `num`, we increment `m[num - 1]`. So if a value is 6 then we can set it to 5 and subtract 5 from the difference. Simiarly, we can traverse the `lowerNums` and increment `m[6 - num]`. So if a value is 1 then we can set it to 6 and subtract 5 from the difference. Repeat the process until the difference `<= 0` otherwise return `-1`.

## Complexity Analysis
- Time complexity: O(m + n)
- Space complexity: O(1)

## Solution
- [C++](solution.cpp)