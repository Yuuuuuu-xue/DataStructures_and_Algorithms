## LeetCode Question
Hard 2246

## Description
You are given a tree (i.e. a connected, undirected graph that has no cycles) rooted at node `0` consisting of `n` nodes numbered from `0` to `n - 1`. The tree is represented by a 0-indexed array `parent` of size `n`, where `parent[i]` is the parent of node `i`. Since node `0` is the root, `parent[0] == -1`.

You are also given a string `s` of length `n` where `s[i]` is the character assigned to node `i`.

Return the length of the longest path in the tree such that no pair of adjacent nodes on the path have the same character assigned to them.

## Example
```
Input: parent = [-1, 0, 0, 1, 1, 2], s = "abacbe"
Output: 3
Explanation:
tree:
    'a'
    / \
  'a' 'b'
  /   / \
'e' 'c'  'b'
The longest path where each two adjacent nodes have different characters in the tree is the path: 0 -> 1 -> 3. The length of this path is 3, so 3 is returned.

Input: parent = [-1, 0, 0, 0], s = "aabc"
Output: 3
tree:
    'a'
  /  |  \
'c' 'b' 'a'
The longest path where each two adjacent nodes have different characters is the path: 2 -> 0 -> 3.
```

## Key Idea
We will solve this problem via DFS. First of all, we will construct the graph (adj list) by using a hashmap that maps the current index to a vector of indices of its children. Then we will traverse the tree via DFS. We will traverse to the leaf node and return an integer representing the maximum length ending with current node. When we reach to nullptr, then we will return `0`. And for any node `curr`, let `pq` be a priority queue of its children return maximum length. Note, we only add `pq` if `s[curr] != s[children]` so they have different characters. Then get two children with maximum length from the priority queue, then the path `max children 1 to root to max children 2` will be a new max length. And we can return the top element of the priority queue and want ending with current root thus + 1.

## Complexity Analysis
- Time complexity: O(n lg n)
- Space complexity: O(n)

## Solution
- [C++](solution.cpp)