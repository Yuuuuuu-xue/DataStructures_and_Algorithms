from typing import Optional

# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def evaluateTree(self, root: Optional[TreeNode]) -> bool:
        # Leaf node
        if root.left is None or root.right is None:
            return True if root.val else False
        
        left_val = self.evaluateTree(root.left)

        # OR
        if root.val == 2:
            # If True OR value, then no need to evaluate value
            if left_val:
                return True
            return self.evaluateTree(root.right)
        else:
            # AND
            # If False AND value, then no need to evaluate value
            if not left_val:
                return False
            return self.evaluateTree(root.right)
