from typing import Optional

# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def solve(self, root: Optional[TreeNode], curr_num: int):
        if root is None:
            return 
        curr_num *= 10
        curr_num += root.val
        # Leaf node
        if root.left is None and root.right is None:
            self.target_sum += curr_num
        self.solve(root.left, curr_num)
        self.solve(root.right, curr_num)

    def sumNumbers(self, root: Optional[TreeNode]) -> int:
        self.target_sum = 0
        self.solve(root, 0)
        return self.target_sum        
