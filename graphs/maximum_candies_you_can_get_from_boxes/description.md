## Graphs
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Hard 1298

## Problem
You have `n` boxes labeled from `0` to `n - 1`. You are given four arrays: `status`, `candies`, `keys`, and `containedBoxes` where:
- `status[i]` is `1` if the `ith` box is open and `0` if the `ith` box is closed
- `candies[i]` is the number of candies in the `ith` box
- `keys[i]` is a list of the labels of the boxes you can open after opening the `ith` box
- `containedBoxes[i]` is a list of the boxes you found inside the `ith` box

You are given an integer array `initialBoxes` that contains the labels of the boxes you initially have. You can take all the candies in any open box and you can use the keys in it to open new boxes and you also can use the boxes you find in it.

Return the maximum number of candies you can get following the rules above.

## Example
```
Input: status = [1, 0, 1, 0], candies = [7, 5, 4, 100], keys = [[], [], [1], []], containedBoxes = [[1, 2], [3], [], []], initialBoxes = [0]
Output: 16
Explanation:
- Initially given box 0, you will find 7 candies in it and boxes 1 and 2
- Box 1 is closed and you do not have a key for it so you will open box 2
- Open box 2 and find 4 candies and key to open box 1
- In box 1, you find 5 candies and box 3 but you will not find a kye to box 3 so box 3 will remain closed
- Thus in total, 7 + 4 + 5 = 16 candy
```

## Key Idea
We start with `initialBoxes` as initial search point. We have those available boxes and keys.

For each iteration, we will loop over the available boxes and try to open the box if it is already opened or we have the key. If not, we will push to the available boxes and try in next iteration.

This provides a hint to use either DFS or BFS to solve this problem.

## Complexity Analysis
- Runtime Complexity: O(n)
- Space Complexity: O(n)

## Solution
- [Python](./solution.py)
