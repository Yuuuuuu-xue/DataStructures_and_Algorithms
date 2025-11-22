# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## Problem
Given an array of positive integers `nums`, remove the smallest subarray (possibly empty) such that the sum of the remaining elements is divisible by `p`. It is not allowed to remove the whole array.

Return the length of the smallest subarray that you need to remove, or `-1` if it's possible.

A subarray is defined as a contiguous block of elements in the array.

## Example:
```
Input: nums = [3, 1, 4, 2], p = 6
Output: 1
Explanation: The sum of the elements in nums is 10, which is not divisible by 6. We can remove the subarray [4], and the sum of the remaining elements is 6, which is divisible by 6.
```

## Key Idea
If the sum of nums % p is 0, then we can return 0 immediately.

If not, then we can iterate over nums and use a similar problem - two sum to solve this problem.

The key idea is that, we know `i` and we can store something in the map such that later index `j` so that `(sum - sum(nums[i:j+1])) % p == 0`. Then, in that case, we found one solution that `j - i + 1` is one of the possible solution. If we see an index `k` such that `i < k < j` and it also works, then the same map will replace `i` since we reach to a smaller value.

Now, the key idea is that, given index `i`, how can we search the map. If not in the map, how can we save in the map.

Suppose given an index `i`, we know the sum from 0 to i in constant time.

What we want is to see if there is subarray such that
- `(sum - sum[i:j+1]) % p == 0`
- `(sum - sum[0:j+1] + sum[0:i]) % p == 0`

At each iteration, we have index `j`, hence, we know
- sum
- sum[0:j+1]
- p
and we want to find `i`

We can check if `(sum - sum[0:j+1]) % p + (sum[0:i]) % p` = p
- and hence p - (sum[0:i] % p)


Now, the key idea is that, how can we find given an index `i`, we want to know the sum from 0 to i in constant time. This can be solved with a prefix sum.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [C++](./solution.cpp)