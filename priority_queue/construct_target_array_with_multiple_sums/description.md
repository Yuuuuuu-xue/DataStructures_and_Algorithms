# DataStructures_and_Algorithms
Click [here](../../README.md) to main page

## Problem
You are given an array `target` of n integers. From a starting array `arr` consisting of `n` 1's, you may perform the following procedure:
- Let `x` be the sum of all elements currently in your array
- Choose index `i` such that `0 <= i < n` and set the value of `arr` at index `i` to `x`
- You may repeat this procedure as many times as needed

Return `true` if it is possible to construct the `target` array from `arr`, otherwise, return `false`.

## Example
```
Input: target = [9, 3, 5]
Output: true
Explanation: Start with arr = [1, 1, 1]
- [1, 1, 1], sum = 3, choose index 1
- [1, 3, 1], sum = 5, choose index 2
- [1, 3, 5], sum = 9, choose index 0
- [9, 3, 5], done
```

## Key Idea
Note, we can build from `[1, 1, 1]` and see if we can change it target. Alternatively, we can check if we can bring target back to `[1, 1, 1]`.

Note, if we build the array from `[1, 1, 1]`, everytime we add it to the sum, that number must be the maximum number of the array. Hence, when we bring target back to `[1, 1, 1]`, we can always choose the largest element possible and hence it provides a hint to solve this problem with max heap.

Now, if we have the sum of the array, we take it back the max. If it is possible, then max - sum is the previous round sum. For instance, [9, 3, 5], the sum is 17 and max is 9, 17 - 9 = 8 which is the previous round sum without that number included (since we replace it).

Since we know that number must be greater 0, hence if this diff >= max, then it is not possible. For instance, if the diff is 9 then 9 + some value of that number then replace it with new max which is greater than 9.

This number cannot be less than 1 otherwise it doesn't make sense since it means some value contains 0.

Now, we have a way to tell if it is not possible, but we need to repeat the process to bring `target` back to `1`. We need a way to calculate the new number (with smaller value) and put it back to the heap.

We know the curr_sum (without modification). We know the curr_max which is the max value before we replace. We want to know `x` which is the new value of `curr_max`. We know the prev_sum = curr_sum - curr_max but this prev_sum does not include `x`. 

We know that `x + prev_sum = curr_max`. Hence, `x = curr_max - prev_sum`.

However, if we have this case `[1, 1000000]`, then we need to repeat this process for so many times until we reach to `[1, 1]`. Note, in this case, `1000000` is always the largest and can repeat the sum for so many times. This provides a hint that we can use some `%`. 

We know that `x + prev_sum = curr_max`. If `x` is always the max, we will repeat the process i.e. `new_x = x + prev_sum` until it reaches to its target. To move `x` to the number that is not largest, we can use `x % prev_sum` so `x < prev_sum`. Is it possible that `x > prev_sum` and `x` is not largest? Not possible because `x > prev_sum of all numbers that is not x` hence it must be chosen. Note, if `x % prev_sum == 0`, then it is not possible only if `prev_sum is not 1`.

i.e. run the case `[1, 1, 10]` should return False and `[8, 5]` should return True.

## Time Complexity
- Runtime Complexity: O(n lg n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)