## Backtracking
Click [here](../notes.md) to go back to the notes page.

## Problem
Given a binary tree where node values are digits from 1 to 9. A path is the binary tree is said to be pseudo-palindromic if at least one permutation of the node values in the path is a palindrome.

Return the number of pseudo-palindromic paths going from the root node to leaf nodes.

## Example:
```
Input: root = [2, 3, 1, 3, 1, null, 1]
		2
	 / \
	3   1
 / \   \ 
3   1   1
Output: 2
Explanation: there are three paths
- 2 -> 3 -> 3, a palindrome
- 2 -> 3 -> 1, not a palindrome
- 2 -> 1 -> 1, a palindrome
```

## Key Idea
We will use DFS to solve this problem so we can traverse from the root node to the the leaf node. Let `m` be a map that maps the node value to its occurrence in the path and let `x` be the number of odd occurrences. For any node `curr`, we will update `m[curr] += 1`, then
- if `m[curr] % 2 == 0`, we set `x -= 1`
- if `m[curr] % 2 != 0`, we set `x += 1`
Then move the left and right subtree. When `curr->left == null` and `curr->right == null`, then we increment the final solution if `x <= 1`. We will use backtrack to remove the nodes we traverse from the set.

## Solution
- [C++](./solution.cpp)