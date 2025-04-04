from typing import Optional

# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right

class Solution:
    def dfs(self, curr: Optional[TreeNode], depth: int):
        if not curr:
            return (None, depth)
    
        left_node, left_depth = self.dfs(curr.left, depth + 1)
        right_node, right_depth = self.dfs(curr.right, depth + 1)

        if left_depth == right_depth:
            return (curr, depth)
        elif left_depth > right_depth:
            return (left_node, left_depth)
        else:
            return (right_node, right_depth)

    def lcaDeepestLeaves(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
        return self.dfs(root)[0]
