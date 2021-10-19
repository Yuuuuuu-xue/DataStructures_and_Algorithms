## Binary Search Tree
Click [here](../notes.md) to go back to the notes page.

## Problem
Given the *head* of a singly linked list where elements are **sorted in ascending order**, convert it to a height balanced BST.

For this problem, a height-balanced binary tree is defined as a binary tree in which the depth of the two subtrees of every node never differ by more than one. 

## Simple Idea
We can simply loop over each element and insert that element into an AVL tree. The insert operation takes $\mathcal{O}(\lg n)$ and therefore the overall runtime is $\mathcal{O}(n \lg n)$.

## Key Idea
If we convert the linked list into a list, then it is easy to build the binary search tree such that tree is height balanced. This is because we can keep track of the start and end indices and its elements efficiently and find the middle value to be the root of a subtree. So we will solve this problem recursively.

## Pseudocode
```
def build_bst(lst, start, end):
    if start > end:
        return None
    mid = (start + end) // 2
    root = TreeNode(lst[mid])
    root.left = build_bst(lst, start, mid - 1)
    root.right = build_bst(lst, mid + 1, end)
    return root

def sortedListToBST(head: ListNode) -> TreeNode:
    lst := convert linked list into list
    return build_bst(lst, 0, len(lst) - 1)
```

## Complexity Analysis
- **Runtime complexity**: $\mathcal{O}(n)$
- **Space complexity**: $\mathcal{O}(n)$

## Solution
- [Python Solution](sorted_linked_list_to_balanced_bst.py)