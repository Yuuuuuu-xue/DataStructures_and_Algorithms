from typing import Optional

# Definition for a binary tree node.
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class Solution:
    def build_path(self, curr: Optional[TreeNode], val: int, path: str):
        if not curr: 
            return False
        if curr.val == val:
            return True
        if curr.left and self.build_path(curr.left, val, path):
            path.append('L')
        elif curr.right and self.build_path(curr.right, val, path):
            path.append('R')
        return path

    def getDirections(self, root: Optional[TreeNode], startValue: int, destValue: int) -> str:
        start_val_path = []
        end_val_path = []
    
        self.build_path(root, startValue, start_val_path)
        self.build_path(root, destValue, end_val_path)

        while len(start_val_path) and len(end_val_path) and start_val_path[-1] == end_val_path[-1]:
            start_val_path.pop()
            end_val_path.pop()
        
        return ['U' for _ in range(len(start_val_path))] + end_val_path[::-1]
