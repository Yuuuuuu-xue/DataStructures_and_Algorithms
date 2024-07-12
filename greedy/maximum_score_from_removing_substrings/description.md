## Greedy Algorithm
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 1717

## Problem
You are given a string `s` and two integers `x` and `y`. You can perform two types of operations any number of times.
- Remove substring `"ab"` and gain `x` points.
    - For example, when removing `"ab"` from `"cabxbae"` it becomes `"cxbae"`
- Remove substring `"ba"` and gain `y` points
    - For example, when removing `"ba"` from `"cabxbae"` it becomes `"cabxe"`

Return the maximum points you can gain after applying the above operations on `s`.

## Example:
```
Input: s = "aabbaaxybbaabb", x = 5, y = 4
Output: 20
```

## Key Idea
Note, if we have `ababacababa`, note, we can group all the consecutive `a` and `b` as a group and find the maximum score. Since it's separated by a non `a` and `b` characters, we will group all the consecutive `a` and `b`.

Now, note, we can remove all `ab`, then we left something with `bbbbb...aaaaa`. Then, we can remove `ba` from the leftover strings. Note, the vice versa is also true.

Now, our greedy strategy is to remove `ab` first is `x >= y` otherwise remove `ba` first.

Now, given a string of `a` and `b`, we can remove `ab` by using a stack. When we see `a`, we push it to the stack. When we see `b`, we pop from stack if exists and increment the `x`. At the end, we construct the leftover strings and remove `ba`. The vice versa is also true.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)
