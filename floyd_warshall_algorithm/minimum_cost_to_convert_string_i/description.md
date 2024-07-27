## Floyd Warshall's Algorithm
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 2976

## Problem
You are given two 0-indexed strings `source` and `target`, both of length `n` and consisting of lowercase English letters. You are also given two 0-indexed character arrays `original` and `changed`, and an integer array `cost`, where `cost[i]` represents the cost of changing the character `original[i]` to the character `changed[i]`.

You start with the string `source`. In one operation, you can pick a character `x` from the string and change it to the character `y` at a cost of `z` if there exists any index `j` such that `cost[j] == z, original[j] == x`, and `changed[j] == y`.

Return the minimum cost to convert the string `source` to the string `target` using any number of operations. If it is impossible to convert `source` to `target`, return `-1`.

Note that there may exsit indicies `i`, `j` such that `original[j] == original[i]` and `changed[j] == changed[i]`.

## Example:
```
Input: source = "abcd", target = "acbe", original = ["a", "b", "c", "c", "e", "d"], changed = ["b", "c", "b", "e", "b", "e"], cost = [2, 5, 5, 1, 2, 20]
Output: 28
Explanation: To convert the string "abcd" to string "acbe":
- Change value at index 1 from 'b' to 'c' at a cost of 5
- Change value at index 2 from 'c' to 'e' at a cost of 1
- Change value at index 2 from 'e' to 'b' at a cost of 2
- Change value at index 3 from 'd' to 'e' at a cost of 20
The total cost icurred is 5 + 1 + 2 + 20 = 28
```

## Key Idea
Note, we can convert a character `original[i]` to `changed[i]` with a cost `cost[i]`. Then this means it's a weighted edge `(original[i], changed[i])` with a weight `cost[i]`.

If we know that given any two letters `x` and `y` and we can find the minimum cost from `x` to `y`, then we can simply loop over each character from `source` and find out the minimum total cost.

To find out the such map, we can use Floyd Warshall's algorithm to build the minimum cost from any pair of letters.

## Complexity Analysis
- Runtime Complexity: O(n ^ 3) = O(26 ^ 3) = O(1)
- Space Complexity: O(n ^ 2) = O(26 ^ 2) = O(1)

## Solution
- [Python](./solution.py)
