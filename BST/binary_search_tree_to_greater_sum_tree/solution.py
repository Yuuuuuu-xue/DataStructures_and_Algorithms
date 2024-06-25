# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution:
    def solve(self, root: TreeNode):
        if not root:
            return
        self.solve(root.right)
        self.sum_greater_val += root.val
        root.val = self.sum_greater_val
        self.solve(root.left)

    def bstToGst(self, root: TreeNode) -> TreeNode:
        self.sum_greater_val = 0
        self.solve(root)
        return root
