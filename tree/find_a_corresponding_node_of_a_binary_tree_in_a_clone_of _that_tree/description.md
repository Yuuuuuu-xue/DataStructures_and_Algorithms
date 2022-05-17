## Tree
Click [here](../notes.md) to go back to the notes page.

## LeetCode Problem
Medium 1379

## Description
Given two binary trees ```original``` and ```cloned``` and given a reference to a node ```target``` in the original tree.

The ```cloned``` tree is a copy of the ```original``` tree. 

Return a reference to the same node in the ```cloned``` tree. 

Note that you are not allowed to change any of the two trees or the ```target``` node and the answer must be a reference to a node in the ```cloned``` tree.

You can assume the values of node of the ```tree``` are unique and ```target``` node is a node from the ```original``` tree and is not ```null```.

## Key Idea
Since all the values are unique, then a simple recursion will solve this problem. At a current node ```curr```, we check if curr.val is the target value or not, if so we can return it. If not, then if curr.left is not none, we recursively call the function with curr = curr.left. Return that node iff it is not null. Same for the right subtree. If both null, then return null.

## Solution
- [Python Solution](find_a_corresponding_node_of_a_binary_tree_in_a_clone_of_that_tree.py)
- [Java Solution](find_a_corresponding_node_of_a_binary_tree_in_a_clone_that_tree.java)
