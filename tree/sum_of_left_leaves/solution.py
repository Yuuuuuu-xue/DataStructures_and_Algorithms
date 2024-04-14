from typing import Optional

# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def solve(self, root: Optional[TreeNode], is_left_node: bool):
        if root is None:
            return
        # Left child
        if root.left is None and root.right is None and is_left_node:
            self.sum_left_leaves += root.val
        
        # Traverse the left node
        self.solve(root.left, True)
        # Traverse the right node
        self.solve(root.right, False)

    def sumOfLeftLeaves(self, root: Optional[TreeNode]) -> int:
        self.sum_left_leaves = 0
        self.solve(root, False)
        return self.sum_left_leaves
