## Dynamic Programming
Click [here](../notes.md) to go back to the notes page.

## Leetcode Problem
Hard 514

## Problem
In the video game Fallout 4, the quest "Road to Freedom" requires players to reach a metal dial called the "Freedom Trail Ring" and use the dial to spell a specific keyword to open the door.

Given a string `ring` that represents the code engraved on the outer ring and another string `key` that represents the keyword that needs to be spelled, return the minimum number of steps to spell all the characters in the keyword.

Initially, the first character of the ring is alinged at the `"12:00"` direction. You should spell all the characters in `key` one by one by rotating `ring` clockwise or anticlockwise to make each character of the string key aligned at the `"12:00"` direction and then by pressing the center button.

At the stage of rotating the ring to spell the key character `key[i]`
1. You can rotate the ring clockwise or anticlockwise by one place, which counts as one step. The final purpose of the rotation is to align one of `ring`'s characters at the `"12:00"` direction, where this character must equal `key[i]`
2. If the characters `key[i]` has been aligned at the `"12:00"` direction, press the center button to spell, which also counts as one step. After the pressing, you could begin to spell the next character in the key (next stage). Otherwise, you have finished all the spelling.

## Example
```
Input: ring = "godding", key = "gd"
Output: 4
Explanation:
1. For the first key character `'g'`, since it is already in place, we just need 1 step to spell this character (press the button)
2. For the second key character `'d', we need to rotate the ring "godding" anticlockwise by two steps to make it become "ddinggo". Also need another step to press the button.

Input: ring = "godding", key = "godding"
Output: 13
```

## Key Idea 
We will solve this problem with a recursion. Let `solve(i, j)` be the problem that the current ring is facing at `ring[i]` and we want to rotate to `key[j]`. We want to find the minimum rotation steps to rotate to `key[j]`.

We can achieve it by looping over each index `i` from the ring and try to rotate it to that position, if rotated position is equal to `key[j]`, then it's a valid move for current position. We calculate the min rotation needed either rotate clockwise or counter clockwise. Then, we can try to rotate to the next position by `solve(x, j + 1)`. Where `x` is the current position in the clock.

Since `(i, j)` may be duplicated calls, we can use a memorization to return the same value when seeing the `(i, j)`. Thus, we will use dynamic programming to solve this problem.

## Complexity Analysis
- Runtime Complexity: O(n * m * n)
- Space Complexity: O(n * m)

## Solution:
- [C++](./solution.py)